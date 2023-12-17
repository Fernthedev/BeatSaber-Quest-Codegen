#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__ObjectiveValueFormatterSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO.get_objectiveName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(&::GlobalNamespace::MissionObjectiveTypeSO::get_objectiveName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                            "get_objectiveName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO.get_objectiveNameLocalized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(&::GlobalNamespace::MissionObjectiveTypeSO::get_objectiveNameLocalized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2352e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                            "get_objectiveNameLocalized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO.get_noConditionValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(&::GlobalNamespace::MissionObjectiveTypeSO::get_noConditionValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                            "get_noConditionValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO.get_objectiveValueFormater
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ObjectiveValueFormatterSO* (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(&::GlobalNamespace::MissionObjectiveTypeSO::get_objectiveValueFormater)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                            "get_objectiveValueFormater",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(&::GlobalNamespace::MissionObjectiveTypeSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionObjectiveTypeSO::__set__objectiveName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::MissionObjectiveTypeSO::__get__objectiveName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::MissionObjectiveTypeSO::__get__objectiveName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::MissionObjectiveTypeSO::__set__noConditionValue(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MissionObjectiveTypeSO::__get__noConditionValue()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& GlobalNamespace::MissionObjectiveTypeSO::__get__noConditionValue() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void GlobalNamespace::MissionObjectiveTypeSO::__set__objectiveValueFormater(::GlobalNamespace::ObjectiveValueFormatterSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ObjectiveValueFormatterSO*, 0x28>(this, std::forward<::GlobalNamespace::ObjectiveValueFormatterSO*>(value));
}
constexpr ::GlobalNamespace::ObjectiveValueFormatterSO* GlobalNamespace::MissionObjectiveTypeSO::__get__objectiveValueFormater()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ObjectiveValueFormatterSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObjectiveValueFormatterSO*> GlobalNamespace::MissionObjectiveTypeSO::__get__objectiveValueFormater() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ObjectiveValueFormatterSO*, 0x28>(this);
}
inline ::StringW GlobalNamespace::MissionObjectiveTypeSO::get_objectiveName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                            "get_objectiveName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::MissionObjectiveTypeSO::get_objectiveNameLocalized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                            "get_objectiveNameLocalized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::MissionObjectiveTypeSO::get_noConditionValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                            "get_noConditionValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::ObjectiveValueFormatterSO* GlobalNamespace::MissionObjectiveTypeSO::get_objectiveValueFormater()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                            "get_objectiveValueFormater",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObjectiveValueFormatterSO*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjectiveTypeSO* GlobalNamespace::MissionObjectiveTypeSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionObjectiveTypeSO*>());
}
inline void GlobalNamespace::MissionObjectiveTypeSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionObjectiveTypeSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
