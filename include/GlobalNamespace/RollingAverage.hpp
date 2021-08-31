// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int64
#include "System/Int64.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: RollingAverage
  // [TokenAttribute] Offset: FFFFFFFF
  class RollingAverage : public ::Il2CppObject {
    public:
    // private System.Int64 _currentTotal
    // Size: 0x8
    // Offset: 0x10
    int64_t currentTotal;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Single _currentAverage
    // Size: 0x4
    // Offset: 0x18
    float currentAverage;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: currentAverage and: buffer
    char __padding1[0x4] = {};
    // private readonly System.Int64[] _buffer
    // Size: 0x8
    // Offset: 0x20
    ::Array<int64_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<int64_t>*) == 0x8);
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x28
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _length
    // Size: 0x4
    // Offset: 0x2C
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RollingAverage
    RollingAverage(int64_t currentTotal_ = {}, float currentAverage_ = {}, ::Array<int64_t>* buffer_ = {}, int index_ = {}, int length_ = {}) noexcept : currentTotal{currentTotal_}, currentAverage{currentAverage_}, buffer{buffer_}, index{index_}, length{length_} {}
    // static field const value: static private System.Int64 kGranularity
    static constexpr const int64_t kGranularity = 1000;
    // Get static field: static private System.Int64 kGranularity
    static int64_t _get_kGranularity();
    // Set static field: static private System.Int64 kGranularity
    static void _set_kGranularity(int64_t value);
    // Get instance field: private System.Int64 _currentTotal
    int64_t _get__currentTotal();
    // Set instance field: private System.Int64 _currentTotal
    void _set__currentTotal(int64_t value);
    // Get instance field: private System.Single _currentAverage
    float _get__currentAverage();
    // Set instance field: private System.Single _currentAverage
    void _set__currentAverage(float value);
    // Get instance field: private readonly System.Int64[] _buffer
    ::Array<int64_t>* _get__buffer();
    // Set instance field: private readonly System.Int64[] _buffer
    void _set__buffer(::Array<int64_t>* value);
    // Get instance field: private System.Int32 _index
    int _get__index();
    // Set instance field: private System.Int32 _index
    void _set__index(int value);
    // Get instance field: private System.Int32 _length
    int _get__length();
    // Set instance field: private System.Int32 _length
    void _set__length(int value);
    // public System.Single get_currentAverage()
    // Offset: 0x16F671C
    float get_currentAverage();
    // public System.Boolean get_hasValue()
    // Offset: 0x16F6724
    bool get_hasValue();
    // public System.Void .ctor(System.Int32 window)
    // Offset: 0x16F6734
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RollingAverage* New_ctor(int window) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RollingAverage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RollingAverage*, creationType>(window)));
    }
    // public System.Void Update(System.Single value)
    // Offset: 0x16F67A4
    void Update(float value);
    // public System.Void Reset()
    // Offset: 0x16F68F4
    void Reset();
  }; // RollingAverage
  #pragma pack(pop)
  static check_size<sizeof(RollingAverage), 44 + sizeof(int)> __GlobalNamespace_RollingAverageSizeCheck;
  static_assert(sizeof(RollingAverage) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RollingAverage*, "", "RollingAverage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RollingAverage::get_currentAverage
// Il2CppName: get_currentAverage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::RollingAverage::*)()>(&GlobalNamespace::RollingAverage::get_currentAverage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RollingAverage*), "get_currentAverage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RollingAverage::get_hasValue
// Il2CppName: get_hasValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::RollingAverage::*)()>(&GlobalNamespace::RollingAverage::get_hasValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RollingAverage*), "get_hasValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RollingAverage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RollingAverage::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RollingAverage::*)(float)>(&GlobalNamespace::RollingAverage::Update)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RollingAverage*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RollingAverage::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RollingAverage::*)()>(&GlobalNamespace::RollingAverage::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RollingAverage*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
