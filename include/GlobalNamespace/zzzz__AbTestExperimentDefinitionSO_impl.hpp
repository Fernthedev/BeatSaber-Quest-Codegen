#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AbTestExperimentDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__AbTestExperimentDefinitionSO_def.hpp"
constexpr void GlobalNamespace::__AbTestExperimentDefinitionSO__Group::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__AbTestExperimentDefinitionSO__Group::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__AbTestExperimentDefinitionSO__Group::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group::__AbTestExperimentDefinitionSO__Group(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group  GlobalNamespace::__AbTestExperimentDefinitionSO__Group::Control{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group  GlobalNamespace::__AbTestExperimentDefinitionSO__Group::Test1{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group  GlobalNamespace::__AbTestExperimentDefinitionSO__Group::Test2{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.get_test1GroupSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&::GlobalNamespace::AbTestExperimentDefinitionSO::get_test1GroupSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eada8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            "get_test1GroupSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.get_test2GroupSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&::GlobalNamespace::AbTestExperimentDefinitionSO::get_test2GroupSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eadb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            "get_test2GroupSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.get_experimentName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&::GlobalNamespace::AbTestExperimentDefinitionSO::get_experimentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eadb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            "get_experimentName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.get_currentUserTreatmentGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AbTestExperimentDefinitionSO__Group (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&::GlobalNamespace::AbTestExperimentDefinitionSO::get_currentUserTreatmentGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eadc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            "get_currentUserTreatmentGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.OnValidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&::GlobalNamespace::AbTestExperimentDefinitionSO::OnValidate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22eadc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.ComputeCurrentUserTreatment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AbTestExperimentDefinitionSO::*)(::StringW)>(&::GlobalNamespace::AbTestExperimentDefinitionSO::ComputeCurrentUserTreatment)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22eadf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            "ComputeCurrentUserTreatment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.ForceSetTreatmentGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AbTestExperimentDefinitionSO::*)(::GlobalNamespace::__AbTestExperimentDefinitionSO__Group)>(&::GlobalNamespace::AbTestExperimentDefinitionSO::ForceSetTreatmentGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eb094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            "ForceSetTreatmentGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AbTestExperimentDefinitionSO__Group>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO.AbSplit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AbTestExperimentDefinitionSO__Group (::GlobalNamespace::AbTestExperimentDefinitionSO::*)(::StringW)>(&::GlobalNamespace::AbTestExperimentDefinitionSO::AbSplit)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x22eae0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            "AbSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbTestExperimentDefinitionSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AbTestExperimentDefinitionSO::*)()>(&::GlobalNamespace::AbTestExperimentDefinitionSO::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22eb09c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__set__experimentName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::AbTestExperimentDefinitionSO::__get__experimentName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::AbTestExperimentDefinitionSO::__get__experimentName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__set__test1GroupSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AbTestExperimentDefinitionSO::__get__test1GroupSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::AbTestExperimentDefinitionSO::__get__test1GroupSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__set__test2GroupSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AbTestExperimentDefinitionSO::__get__test2GroupSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::AbTestExperimentDefinitionSO::__get__test2GroupSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__set__controlGroupSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AbTestExperimentDefinitionSO::__get__controlGroupSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::AbTestExperimentDefinitionSO::__get__controlGroupSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__set__salt(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::AbTestExperimentDefinitionSO::__get__salt()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& GlobalNamespace::AbTestExperimentDefinitionSO::__get__salt() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void GlobalNamespace::AbTestExperimentDefinitionSO::__set__currentUserTreatmentGroup(::GlobalNamespace::__AbTestExperimentDefinitionSO__Group  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__AbTestExperimentDefinitionSO__Group, 0x38>(this, std::forward<::GlobalNamespace::__AbTestExperimentDefinitionSO__Group>(value));
}
constexpr ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group& GlobalNamespace::AbTestExperimentDefinitionSO::__get__currentUserTreatmentGroup()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__AbTestExperimentDefinitionSO__Group, 0x38>(this);
}
constexpr ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group const& GlobalNamespace::AbTestExperimentDefinitionSO::__get__currentUserTreatmentGroup() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__AbTestExperimentDefinitionSO__Group, 0x38>(this);
}
inline float_t GlobalNamespace::AbTestExperimentDefinitionSO::get_test1GroupSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            "get_test1GroupSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::AbTestExperimentDefinitionSO::get_test2GroupSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            "get_test2GroupSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::AbTestExperimentDefinitionSO::get_experimentName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            "get_experimentName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group GlobalNamespace::AbTestExperimentDefinitionSO::get_currentUserTreatmentGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            "get_currentUserTreatmentGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AbTestExperimentDefinitionSO__Group, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AbTestExperimentDefinitionSO::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AbTestExperimentDefinitionSO::ComputeCurrentUserTreatment(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            "ComputeCurrentUserTreatment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId);
}
inline void GlobalNamespace::AbTestExperimentDefinitionSO::ForceSetTreatmentGroup(::GlobalNamespace::__AbTestExperimentDefinitionSO__Group  group)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            "ForceSetTreatmentGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AbTestExperimentDefinitionSO__Group>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, group);
}
inline ::GlobalNamespace::__AbTestExperimentDefinitionSO__Group GlobalNamespace::AbTestExperimentDefinitionSO::AbSplit(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            "AbSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AbTestExperimentDefinitionSO__Group, false>(*this, ___internal_method, userId);
}
inline ::GlobalNamespace::AbTestExperimentDefinitionSO* GlobalNamespace::AbTestExperimentDefinitionSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AbTestExperimentDefinitionSO*>());
}
inline void GlobalNamespace::AbTestExperimentDefinitionSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AbTestExperimentDefinitionSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
