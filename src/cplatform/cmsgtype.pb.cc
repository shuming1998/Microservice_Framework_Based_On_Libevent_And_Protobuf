// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cmsgtype.proto

#include "cmsgtype.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace cmsg {
}  // namespace cmsg
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_cmsgtype_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_cmsgtype_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_cmsgtype_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_cmsgtype_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_cmsgtype_2eproto[] =
  "\n\016cmsgtype.proto\022\004cmsg*\230\004\n\010CMsgType\022\023\n\017N"
  "ONE_DO_NOT_USE\020\000\022\021\n\rMSG_LOGIN_REQ\020\001\022\021\n\rM"
  "SG_LOGIN_RES\020\002\022\017\n\013MSG_DIR_REQ\020\003\022\017\n\013MSG_D"
  "IR_RES\020\004\022\024\n\020MSG_REGISTER_REQ\020\005\022\024\n\020MSG_RE"
  "GISTER_RES\020\006\022\027\n\023MSG_GET_SERVICE_REQ\020\007\022\027\n"
  "\023MSG_GET_SERVICE_RES\020\010\022\031\n\025MSG_UPLOAD_CON"
  "FIG_REQ\020\t\022\031\n\025MSG_UPLOAD_CONFIG_RES\020\n\022\033\n\027"
  "MSG_DOWNLOAD_CONFIG_REQ\020\013\022\033\n\027MSG_DOWNLOA"
  "D_CONFIG_RES\020\014\022\037\n\033MSG_DOWNLOAD_ALL_CONFI"
  "G_REQ\020\r\022\037\n\033MSG_DOWNLOAD_ALL_CONFIG_RES\020\016"
  "\022\031\n\025MSG_DELETE_CONFIG_REQ\020\017\022\031\n\025MSG_DELET"
  "E_CONFIG_RES\020\020\022\024\n\020MSG_ADD_USER_REQ\020\021\022\024\n\020"
  "MSG_ADD_USER_RES\020\022\022\024\n\017MSG_ADD_LOG_REQ\020\323\001"
  "\022\023\n\rMSG_HEART_REQ\020\376\377\003\022\022\n\014MSG_MAX_TYPE\020\377\377"
  "\003b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_cmsgtype_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_cmsgtype_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_cmsgtype_2eproto_once;
static bool descriptor_table_cmsgtype_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cmsgtype_2eproto = {
  &descriptor_table_cmsgtype_2eproto_initialized, descriptor_table_protodef_cmsgtype_2eproto, "cmsgtype.proto", 569,
  &descriptor_table_cmsgtype_2eproto_once, descriptor_table_cmsgtype_2eproto_sccs, descriptor_table_cmsgtype_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_cmsgtype_2eproto::offsets,
  file_level_metadata_cmsgtype_2eproto, 0, file_level_enum_descriptors_cmsgtype_2eproto, file_level_service_descriptors_cmsgtype_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_cmsgtype_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_cmsgtype_2eproto), true);
namespace cmsg {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CMsgType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_cmsgtype_2eproto);
  return file_level_enum_descriptors_cmsgtype_2eproto[0];
}
bool CMsgType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 211:
    case 65534:
    case 65535:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace cmsg
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
