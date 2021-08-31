// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ComputeBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DAFBB8
  // [NativeHeaderAttribute] Offset: DAFBB8
  // [UsedByNativeCodeAttribute] Offset: DAFBB8
  class ComputeBuffer : public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: ComputeBuffer
    ComputeBuffer(System::IntPtr m_Ptr_ = {}) noexcept : m_Ptr{m_Ptr_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field: System.IntPtr m_Ptr
    System::IntPtr _get_m_Ptr();
    // Set instance field: System.IntPtr m_Ptr
    void _set_m_Ptr(System::IntPtr value);
  }; // UnityEngine.ComputeBuffer
  #pragma pack(pop)
  static check_size<sizeof(ComputeBuffer), 16 + sizeof(System::IntPtr)> __UnityEngine_ComputeBufferSizeCheck;
  static_assert(sizeof(ComputeBuffer) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ComputeBuffer*, "UnityEngine", "ComputeBuffer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
