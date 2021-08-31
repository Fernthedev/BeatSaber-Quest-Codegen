// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.FrameTiming
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DADC24
  struct FrameTiming/*, public System::ValueType*/ {
    public:
    // [NativeNameAttribute] Offset: 0xDB251C
    // public System.UInt64 cpuTimePresentCalled
    // Size: 0x8
    // Offset: 0x0
    uint64_t cpuTimePresentCalled;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // [NativeNameAttribute] Offset: 0xDB2554
    // public System.Double cpuFrameTime
    // Size: 0x8
    // Offset: 0x8
    double cpuFrameTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // [NativeNameAttribute] Offset: 0xDB258C
    // public System.UInt64 cpuTimeFrameComplete
    // Size: 0x8
    // Offset: 0x10
    uint64_t cpuTimeFrameComplete;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // [NativeNameAttribute] Offset: 0xDB25C4
    // public System.Double gpuFrameTime
    // Size: 0x8
    // Offset: 0x18
    double gpuFrameTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // [NativeNameAttribute] Offset: 0xDB25FC
    // public System.Single heightScale
    // Size: 0x4
    // Offset: 0x20
    float heightScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xDB2634
    // public System.Single widthScale
    // Size: 0x4
    // Offset: 0x24
    float widthScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xDB266C
    // public System.UInt32 syncInterval
    // Size: 0x4
    // Offset: 0x28
    uint syncInterval;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: FrameTiming
    constexpr FrameTiming(uint64_t cpuTimePresentCalled_ = {}, double cpuFrameTime_ = {}, uint64_t cpuTimeFrameComplete_ = {}, double gpuFrameTime_ = {}, float heightScale_ = {}, float widthScale_ = {}, uint syncInterval_ = {}) noexcept : cpuTimePresentCalled{cpuTimePresentCalled_}, cpuFrameTime{cpuFrameTime_}, cpuTimeFrameComplete{cpuTimeFrameComplete_}, gpuFrameTime{gpuFrameTime_}, heightScale{heightScale_}, widthScale{widthScale_}, syncInterval{syncInterval_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public System.UInt64 cpuTimePresentCalled
    uint64_t _get_cpuTimePresentCalled();
    // Set instance field: public System.UInt64 cpuTimePresentCalled
    void _set_cpuTimePresentCalled(uint64_t value);
    // Get instance field: public System.Double cpuFrameTime
    double _get_cpuFrameTime();
    // Set instance field: public System.Double cpuFrameTime
    void _set_cpuFrameTime(double value);
    // Get instance field: public System.UInt64 cpuTimeFrameComplete
    uint64_t _get_cpuTimeFrameComplete();
    // Set instance field: public System.UInt64 cpuTimeFrameComplete
    void _set_cpuTimeFrameComplete(uint64_t value);
    // Get instance field: public System.Double gpuFrameTime
    double _get_gpuFrameTime();
    // Set instance field: public System.Double gpuFrameTime
    void _set_gpuFrameTime(double value);
    // Get instance field: public System.Single heightScale
    float _get_heightScale();
    // Set instance field: public System.Single heightScale
    void _set_heightScale(float value);
    // Get instance field: public System.Single widthScale
    float _get_widthScale();
    // Set instance field: public System.Single widthScale
    void _set_widthScale(float value);
    // Get instance field: public System.UInt32 syncInterval
    uint _get_syncInterval();
    // Set instance field: public System.UInt32 syncInterval
    void _set_syncInterval(uint value);
  }; // UnityEngine.FrameTiming
  #pragma pack(pop)
  static check_size<sizeof(FrameTiming), 40 + sizeof(uint)> __UnityEngine_FrameTimingSizeCheck;
  static_assert(sizeof(FrameTiming) == 0x2C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::FrameTiming, "UnityEngine", "FrameTiming");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
