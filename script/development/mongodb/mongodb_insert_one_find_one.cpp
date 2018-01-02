//!/usr/bin/rperl

// [[[ HEADER ]]]
#include <rperlstandalone.h>
#include <RPerl/Support/MongoDBStandAlone.h>
#ifndef __CPP__INCLUDED__script__development__mongodb__mongodb_insert_one_find_one_cpp
#define __CPP__INCLUDED__script__development__mongodb__mongodb_insert_one_find_one_cpp 0.001_000
# ifdef __CPP__TYPES



// [[[ INCLUDES ]]]
int main() {
    // [[[ OPERATIONS HEADER ]]]

// [[[ OPERATIONS ]]]
    MongoDB__MongoClient my_client{mongodb_host{"mongodb://localhost:27017"}};
    string my_database_name = (const string) "rperl_test_database";
    prerr "have $my_database_name = " << my_database_name << endl;
    MongoDB__Database my_database = mongodb_get_database(my_client, my_database_name);
    string my_collection_name = (const string) "rperl_test_collection";
    prerr "have $my_collection_name = " << my_collection_name << endl;
    MongoDB__Collection my_collection = mongodb_get_collection(my_database, my_collection_name);
    bson_document my_document = bson_begin << "name" << (const string) "rperl_test_data" << "source" << (const string) "Perl" << "foo_integer" << 1 << "foo_string_arrayref" << bson_arrayref_begin << (const string) "abc" << (const string) "def" << (const string) "ghi" << bson_arrayref_end << "foo_integer_hashref" << bson_hashref_begin << "x" << 203 << "y" << 102 << bson_hashref_end << bson_end;
    MongoDB__InsertOneResult my_result = mongodb_insert_one(my_collection, my_document);
    bson_document__optional my_found_data = mongodb_find_one(my_collection, bson_begin << "name" << (const string) "rperl_test_data" << bson_end);
    if ( my_found_data ) {
        prerr "have    $my_found_data = " << bson_Dumper(my_found_data) << endl;
    }
    else {
        prerr "have NO $my_found_data" << endl;
    }



    // [[[ OPERATIONS FOOTER ]]]
    return 0;
}

// [[[ FOOTER ]]]
# elif defined __PERL__TYPES
Purposefully_die_from_a_compile-time_error,_due_to____PERL__TYPES_being_defined.__We_need_to_define_only___CPP__TYPES_in_this_file!
# endif
#endif
