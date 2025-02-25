// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache
#include "System/Xml/XmlWellFormedWriter_AttributeValueCache.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.BufferChunk
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlWellFormedWriter::AttributeValueCache::BufferChunk : public ::Il2CppObject {
    public:
    // System.Char[] buffer
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppChar>* buffer;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // System.Int32 index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 count
    // Size: 0x4
    // Offset: 0x1C
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BufferChunk
    BufferChunk(::Array<::Il2CppChar>* buffer_ = {}, int index_ = {}, int count_ = {}) noexcept : buffer{buffer_}, index{index_}, count{count_} {}
    // Get instance field reference: System.Char[] buffer
    ::Array<::Il2CppChar>*& dyn_buffer();
    // Get instance field reference: System.Int32 index
    int& dyn_index();
    // Get instance field reference: System.Int32 count
    int& dyn_count();
    // System.Void .ctor(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x23EB934
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlWellFormedWriter::AttributeValueCache::BufferChunk* New_ctor(::Array<::Il2CppChar>* buffer, int index, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlWellFormedWriter::AttributeValueCache::BufferChunk::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlWellFormedWriter::AttributeValueCache::BufferChunk*, creationType>(buffer, index, count)));
    }
  }; // System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.BufferChunk
  #pragma pack(pop)
  static check_size<sizeof(XmlWellFormedWriter::AttributeValueCache::BufferChunk), 28 + sizeof(int)> __System_Xml_XmlWellFormedWriter_AttributeValueCache_BufferChunkSizeCheck;
  static_assert(sizeof(XmlWellFormedWriter::AttributeValueCache::BufferChunk) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWellFormedWriter::AttributeValueCache::BufferChunk*, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/BufferChunk");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlWellFormedWriter::AttributeValueCache::BufferChunk::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
