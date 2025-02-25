// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x3C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VRVulkanTextureData_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VRVulkanTextureData_t/*, public System::ValueType*/ {
    public:
    // public System.UInt64 m_nImage
    // Size: 0x8
    // Offset: 0x0
    uint64_t m_nImage;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.IntPtr m_pDevice
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr m_pDevice;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pPhysicalDevice
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_pPhysicalDevice;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pInstance
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr m_pInstance;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr m_pQueue
    // Size: 0x8
    // Offset: 0x20
    System::IntPtr m_pQueue;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.UInt32 m_nQueueFamilyIndex
    // Size: 0x4
    // Offset: 0x28
    uint m_nQueueFamilyIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nWidth
    // Size: 0x4
    // Offset: 0x2C
    uint m_nWidth;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nHeight
    // Size: 0x4
    // Offset: 0x30
    uint m_nHeight;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nFormat
    // Size: 0x4
    // Offset: 0x34
    uint m_nFormat;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nSampleCount
    // Size: 0x4
    // Offset: 0x38
    uint m_nSampleCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: VRVulkanTextureData_t
    constexpr VRVulkanTextureData_t(uint64_t m_nImage_ = {}, System::IntPtr m_pDevice_ = {}, System::IntPtr m_pPhysicalDevice_ = {}, System::IntPtr m_pInstance_ = {}, System::IntPtr m_pQueue_ = {}, uint m_nQueueFamilyIndex_ = {}, uint m_nWidth_ = {}, uint m_nHeight_ = {}, uint m_nFormat_ = {}, uint m_nSampleCount_ = {}) noexcept : m_nImage{m_nImage_}, m_pDevice{m_pDevice_}, m_pPhysicalDevice{m_pPhysicalDevice_}, m_pInstance{m_pInstance_}, m_pQueue{m_pQueue_}, m_nQueueFamilyIndex{m_nQueueFamilyIndex_}, m_nWidth{m_nWidth_}, m_nHeight{m_nHeight_}, m_nFormat{m_nFormat_}, m_nSampleCount{m_nSampleCount_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt64 m_nImage
    uint64_t& dyn_m_nImage();
    // Get instance field reference: public System.IntPtr m_pDevice
    System::IntPtr& dyn_m_pDevice();
    // Get instance field reference: public System.IntPtr m_pPhysicalDevice
    System::IntPtr& dyn_m_pPhysicalDevice();
    // Get instance field reference: public System.IntPtr m_pInstance
    System::IntPtr& dyn_m_pInstance();
    // Get instance field reference: public System.IntPtr m_pQueue
    System::IntPtr& dyn_m_pQueue();
    // Get instance field reference: public System.UInt32 m_nQueueFamilyIndex
    uint& dyn_m_nQueueFamilyIndex();
    // Get instance field reference: public System.UInt32 m_nWidth
    uint& dyn_m_nWidth();
    // Get instance field reference: public System.UInt32 m_nHeight
    uint& dyn_m_nHeight();
    // Get instance field reference: public System.UInt32 m_nFormat
    uint& dyn_m_nFormat();
    // Get instance field reference: public System.UInt32 m_nSampleCount
    uint& dyn_m_nSampleCount();
  }; // OVR.OpenVR.VRVulkanTextureData_t
  #pragma pack(pop)
  static check_size<sizeof(VRVulkanTextureData_t), 56 + sizeof(uint)> __OVR_OpenVR_VRVulkanTextureData_tSizeCheck;
  static_assert(sizeof(VRVulkanTextureData_t) == 0x3C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VRVulkanTextureData_t, "OVR.OpenVR", "VRVulkanTextureData_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
