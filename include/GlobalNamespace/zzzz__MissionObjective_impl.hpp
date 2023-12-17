#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeSO_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr void GlobalNamespace::__MissionObjective__ReferenceValueComparisonType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MissionObjective__ReferenceValueComparisonType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MissionObjective__ReferenceValueComparisonType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType::__MissionObjective__ReferenceValueComparisonType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType  GlobalNamespace::__MissionObjective__ReferenceValueComparisonType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType  GlobalNamespace::__MissionObjective__ReferenceValueComparisonType::Equal{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType  GlobalNamespace::__MissionObjective__ReferenceValueComparisonType::Max{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType  GlobalNamespace::__MissionObjective__ReferenceValueComparisonType::Min{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.get_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MissionObjectiveTypeSO* (::GlobalNamespace::MissionObjective::*)()>(&::GlobalNamespace::MissionObjective::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.get_referenceValueComparisonType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType (::GlobalNamespace::MissionObjective::*)()>(&::GlobalNamespace::MissionObjective::get_referenceValueComparisonType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                            "get_referenceValueComparisonType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.get_referenceValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MissionObjective::*)()>(&::GlobalNamespace::MissionObjective::get_referenceValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                            "get_referenceValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::MissionObjective*, ::GlobalNamespace::MissionObjective*)>(&::GlobalNamespace::MissionObjective::op_Equality)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2352b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::MissionObjective*, ::GlobalNamespace::MissionObjective*)>(&::GlobalNamespace::MissionObjective::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2352bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MissionObjective::*)(::System::Object*)>(&::GlobalNamespace::MissionObjective::Equals)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2352bd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MissionObjective::*)()>(&::GlobalNamespace::MissionObjective::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2352ce0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjective._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjective::*)()>(&::GlobalNamespace::MissionObjective::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionObjective::__set__type(::GlobalNamespace::MissionObjectiveTypeSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionObjectiveTypeSO*, 0x10>(this, std::forward<::GlobalNamespace::MissionObjectiveTypeSO*>(value));
}
constexpr ::GlobalNamespace::MissionObjectiveTypeSO* GlobalNamespace::MissionObjective::__get__type()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionObjectiveTypeSO*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveTypeSO*> GlobalNamespace::MissionObjective::__get__type() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionObjectiveTypeSO*, 0x10>(this);
}
constexpr void GlobalNamespace::MissionObjective::__set__referenceValueComparisonType(::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType, 0x18>(this, std::forward<::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType>(value));
}
constexpr ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType& GlobalNamespace::MissionObjective::__get__referenceValueComparisonType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType, 0x18>(this);
}
constexpr ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType const& GlobalNamespace::MissionObjective::__get__referenceValueComparisonType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType, 0x18>(this);
}
constexpr void GlobalNamespace::MissionObjective::__set__referenceValue(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::MissionObjective::__get__referenceValue()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& GlobalNamespace::MissionObjective::__get__referenceValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
inline ::GlobalNamespace::MissionObjectiveTypeSO* GlobalNamespace::MissionObjective::get_type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionObjectiveTypeSO*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType GlobalNamespace::MissionObjective::get_referenceValueComparisonType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                            "get_referenceValueComparisonType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::MissionObjective::get_referenceValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                            "get_referenceValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::MissionObjective::op_Equality(::GlobalNamespace::MissionObjective*  obj1, ::GlobalNamespace::MissionObjective*  obj2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj1, obj2);
}
inline bool GlobalNamespace::MissionObjective::op_Inequality(::GlobalNamespace::MissionObjective*  obj1, ::GlobalNamespace::MissionObjective*  obj2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj1, obj2);
}
inline bool GlobalNamespace::MissionObjective::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::MissionObjective::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjective* GlobalNamespace::MissionObjective::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionObjective*>());
}
inline void GlobalNamespace::MissionObjective::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjective*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
