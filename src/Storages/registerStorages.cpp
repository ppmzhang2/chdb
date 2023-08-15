#include <Storages/registerStorages.h>
#include <Storages/StorageFactory.h>

#include "config.h"

namespace DB
{

void registerStorageLog(StorageFactory & factory);
void registerStorageStripeLog(StorageFactory & factory);
void registerStorageMergeTree(StorageFactory & factory);
void registerStorageNull(StorageFactory & factory);
void registerStorageMerge(StorageFactory & factory);
void registerStorageBuffer(StorageFactory & factory);
void registerStorageDistributed(StorageFactory & factory);
void registerStorageMemory(StorageFactory & factory);
void registerStorageFile(StorageFactory & factory);
void registerStorageURL(StorageFactory & factory);
void registerStorageDictionary(StorageFactory & factory);
void registerStorageSet(StorageFactory & factory);
void registerStorageJoin(StorageFactory & factory);
void registerStorageView(StorageFactory & factory);
void registerStorageMaterializedView(StorageFactory & factory);
void registerStorageLiveView(StorageFactory & factory);
void registerStorageGenerateRandom(StorageFactory & factory);
void registerStorageExecutable(StorageFactory & factory);
void registerStorageWindowView(StorageFactory & factory);

// MEILISEARCH
void registerStorageMeiliSearch(StorageFactory& factory);

#if USE_AWS_S3
void registerStorageS3(StorageFactory & factory);
void registerStorageCOS(StorageFactory & factory);
void registerStorageOSS(StorageFactory & factory);
void registerStorageHudi(StorageFactory & factory);
#if USE_PARQUET
void registerStorageDeltaLake(StorageFactory & factory);
#endif
#if USE_AVRO
void registerStorageIceberg(StorageFactory & factory);
#endif
#endif

#if USE_HDFS
void registerStorageHDFS(StorageFactory & factory);

#if USE_HIVE
void registerStorageHive(StorageFactory & factory);
#endif

#endif

void registerStorageODBC(StorageFactory & factory);
void registerStorageJDBC(StorageFactory & factory);

#if USE_MYSQL
void registerStorageMySQL(StorageFactory & factory);
#endif

void registerStorageMongoDB(StorageFactory & factory);
void registerStorageRedis(StorageFactory & factory);


#if USE_RDKAFKA
void registerStorageKafka(StorageFactory & factory);
#endif

#if USE_AMQPCPP
void registerStorageRabbitMQ(StorageFactory & factory);
#endif

#if USE_NATSIO
void registerStorageNATS(StorageFactory & factory);
#endif

#if USE_ROCKSDB
void registerStorageEmbeddedRocksDB(StorageFactory & factory);
#endif

#if USE_LIBPQXX
void registerStoragePostgreSQL(StorageFactory & factory);
void registerStorageMaterializedPostgreSQL(StorageFactory & factory);
#endif

#if USE_MYSQL || USE_LIBPQXX
void registerStorageExternalDistributed(StorageFactory & factory);
#endif

#if USE_FILELOG
void registerStorageFileLog(StorageFactory & factory);
#endif

#if USE_SQLITE
void registerStorageSQLite(StorageFactory & factory);
#endif

void registerStorageKeeperMap(StorageFactory & factory);

#if USE_AZURE_BLOB_STORAGE
void registerStorageAzureBlob(StorageFactory & factory);
#endif

void registerStorages()
{
    auto & factory = StorageFactory::instance();

    registerStorageLog(factory);
    registerStorageStripeLog(factory);
    registerStorageMergeTree(factory);
    registerStorageNull(factory);
    registerStorageMerge(factory);
    registerStorageBuffer(factory);
    registerStorageDistributed(factory);
    registerStorageMemory(factory);
    registerStorageFile(factory);
    registerStorageURL(factory);
    registerStorageDictionary(factory);
    registerStorageSet(factory);
    registerStorageJoin(factory);
    registerStorageView(factory);
    registerStorageMaterializedView(factory);
    registerStorageLiveView(factory);
    registerStorageGenerateRandom(factory);
    registerStorageExecutable(factory);
    registerStorageWindowView(factory);

    // MEILISEARCH
    registerStorageMeiliSearch(factory);

    #if USE_AWS_S3
    registerStorageS3(factory);
    registerStorageCOS(factory);
    registerStorageOSS(factory);
    registerStorageHudi(factory);

    #if USE_PARQUET
    registerStorageDeltaLake(factory);
    #endif

    #if USE_AVRO
    registerStorageIceberg(factory);
    #endif

    #endif

    #if USE_HDFS
    registerStorageHDFS(factory);

    #if USE_HIVE
    registerStorageHive(factory);
    #endif

    #endif

    registerStorageODBC(factory);
    registerStorageJDBC(factory);

    #if USE_MYSQL
    registerStorageMySQL(factory);
    #endif

    registerStorageMongoDB(factory);
    registerStorageRedis(factory);

    #if USE_RDKAFKA
    registerStorageKafka(factory);
    #endif

    #if USE_FILELOG
    registerStorageFileLog(factory);
    #endif

    #if USE_AMQPCPP
    registerStorageRabbitMQ(factory);
    #endif

    #if USE_NATSIO
    registerStorageNATS(factory);
    #endif

    #if USE_ROCKSDB
    registerStorageEmbeddedRocksDB(factory);
    #endif

    #if USE_LIBPQXX
    registerStoragePostgreSQL(factory);
    registerStorageMaterializedPostgreSQL(factory);
    #endif

    #if USE_MYSQL || USE_LIBPQXX
    registerStorageExternalDistributed(factory);
    #endif

    #if USE_SQLITE
    registerStorageSQLite(factory);
    #endif

    registerStorageKeeperMap(factory);

    #if USE_AZURE_BLOB_STORAGE
    registerStorageAzureBlob(factory);
    #endif
}

}