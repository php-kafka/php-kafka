/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 4472fbf199b54c995ae1726535c9ccc480d75fea */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Kafka_TopicPartition___construct, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, topic, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, partition, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, offset, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Kafka_TopicPartition_getTopicName, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_Kafka_TopicPartition_setTopic, 0, 1, Kafka\\TopicPartition, 0)
	ZEND_ARG_TYPE_INFO(0, topicName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Kafka_TopicPartition_getPartition, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_Kafka_TopicPartition_setPartition, 0, 1, Kafka\\TopicPartition, 0)
	ZEND_ARG_TYPE_INFO(0, partition, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Kafka_TopicPartition_getOffset arginfo_class_Kafka_TopicPartition_getPartition

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_Kafka_TopicPartition_setOffset, 0, 1, Kafka\\TopicPartition, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
ZEND_END_ARG_INFO()


ZEND_METHOD(Kafka_TopicPartition, __construct);
ZEND_METHOD(Kafka_TopicPartition, getTopicName);
ZEND_METHOD(Kafka_TopicPartition, setTopic);
ZEND_METHOD(Kafka_TopicPartition, getPartition);
ZEND_METHOD(Kafka_TopicPartition, setPartition);
ZEND_METHOD(Kafka_TopicPartition, getOffset);
ZEND_METHOD(Kafka_TopicPartition, setOffset);


static const zend_function_entry class_Kafka_TopicPartition_methods[] = {
	ZEND_ME(Kafka_TopicPartition, __construct, arginfo_class_Kafka_TopicPartition___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Kafka_TopicPartition, getTopicName, arginfo_class_Kafka_TopicPartition_getTopicName, ZEND_ACC_PUBLIC)
	ZEND_ME(Kafka_TopicPartition, setTopic, arginfo_class_Kafka_TopicPartition_setTopic, ZEND_ACC_PUBLIC)
	ZEND_ME(Kafka_TopicPartition, getPartition, arginfo_class_Kafka_TopicPartition_getPartition, ZEND_ACC_PUBLIC)
	ZEND_ME(Kafka_TopicPartition, setPartition, arginfo_class_Kafka_TopicPartition_setPartition, ZEND_ACC_PUBLIC)
	ZEND_ME(Kafka_TopicPartition, getOffset, arginfo_class_Kafka_TopicPartition_getOffset, ZEND_ACC_PUBLIC)
	ZEND_ME(Kafka_TopicPartition, setOffset, arginfo_class_Kafka_TopicPartition_setOffset, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};
