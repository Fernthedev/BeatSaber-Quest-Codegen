// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.EventHandlerList
#include "System/ComponentModel/EventHandlerList.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.EventHandlerList/System.ComponentModel.ListEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class EventHandlerList::ListEntry : public ::Il2CppObject {
    public:
    // System.ComponentModel.EventHandlerList/System.ComponentModel.ListEntry next
    // Size: 0x8
    // Offset: 0x10
    System::ComponentModel::EventHandlerList::ListEntry* next;
    // Field size check
    static_assert(sizeof(System::ComponentModel::EventHandlerList::ListEntry*) == 0x8);
    // System.Object key
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* key;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Delegate handler
    // Size: 0x8
    // Offset: 0x20
    System::Delegate* handler;
    // Field size check
    static_assert(sizeof(System::Delegate*) == 0x8);
    // Creating value type constructor for type: ListEntry
    ListEntry(System::ComponentModel::EventHandlerList::ListEntry* next_ = {}, ::Il2CppObject* key_ = {}, System::Delegate* handler_ = {}) noexcept : next{next_}, key{key_}, handler{handler_} {}
    // Get instance field reference: System.ComponentModel.EventHandlerList/System.ComponentModel.ListEntry next
    System::ComponentModel::EventHandlerList::ListEntry*& dyn_next();
    // Get instance field reference: System.Object key
    ::Il2CppObject*& dyn_key();
    // Get instance field reference: System.Delegate handler
    System::Delegate*& dyn_handler();
  }; // System.ComponentModel.EventHandlerList/System.ComponentModel.ListEntry
  #pragma pack(pop)
  static check_size<sizeof(EventHandlerList::ListEntry), 32 + sizeof(System::Delegate*)> __System_ComponentModel_EventHandlerList_ListEntrySizeCheck;
  static_assert(sizeof(EventHandlerList::ListEntry) == 0x28);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::EventHandlerList::ListEntry*, "System.ComponentModel", "EventHandlerList/ListEntry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
