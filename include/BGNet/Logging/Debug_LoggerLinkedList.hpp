// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Logging.Debug
#include "BGNet/Logging/Debug.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Logging::Debug::LoggerLinkedList);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::Debug::LoggerLinkedList*, "BGNet.Logging", "Debug/LoggerLinkedList");
// Type namespace: BGNet.Logging
namespace BGNet::Logging {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Logging.Debug/BGNet.Logging.LoggerLinkedList
  // [TokenAttribute] Offset: FFFFFFFF
  class Debug::LoggerLinkedList : public ::Il2CppObject {
    public:
    public:
    // public readonly BGNet.Logging.Debug/BGNet.Logging.ILogger logger
    // Size: 0x8
    // Offset: 0x10
    ::BGNet::Logging::Debug::ILogger* logger;
    // Field size check
    static_assert(sizeof(::BGNet::Logging::Debug::ILogger*) == 0x8);
    // public BGNet.Logging.Debug/BGNet.Logging.LoggerLinkedList next
    // Size: 0x8
    // Offset: 0x18
    ::BGNet::Logging::Debug::LoggerLinkedList* next;
    // Field size check
    static_assert(sizeof(::BGNet::Logging::Debug::LoggerLinkedList*) == 0x8);
    public:
    // Get instance field reference: public readonly BGNet.Logging.Debug/BGNet.Logging.ILogger logger
    [[deprecated("Use field access instead!")]] ::BGNet::Logging::Debug::ILogger*& dyn_logger();
    // Get instance field reference: public BGNet.Logging.Debug/BGNet.Logging.LoggerLinkedList next
    [[deprecated("Use field access instead!")]] ::BGNet::Logging::Debug::LoggerLinkedList*& dyn_next();
    // public System.Void .ctor(BGNet.Logging.Debug/BGNet.Logging.ILogger logger)
    // Offset: 0x2B1B7E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Debug::LoggerLinkedList* New_ctor(::BGNet::Logging::Debug::ILogger* logger) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Logging::Debug::LoggerLinkedList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Debug::LoggerLinkedList*, creationType>(logger)));
    }
  }; // BGNet.Logging.Debug/BGNet.Logging.LoggerLinkedList
  #pragma pack(pop)
  static check_size<sizeof(Debug::LoggerLinkedList), 24 + sizeof(::BGNet::Logging::Debug::LoggerLinkedList*)> __BGNet_Logging_Debug_LoggerLinkedListSizeCheck;
  static_assert(sizeof(Debug::LoggerLinkedList) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Logging::Debug::LoggerLinkedList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
