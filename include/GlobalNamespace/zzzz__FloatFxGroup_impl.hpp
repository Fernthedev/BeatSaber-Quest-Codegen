#pragma once
#include "GlobalNamespace/zzzz__LightGroupSubsystem_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroup_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroup.get_isTriggerOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::FloatFxGroup::*)()>(&::GlobalNamespace::FloatFxGroup::get_isTriggerOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a5800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroup*>::get(),
                            "get_isTriggerOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroup.get_targets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxGroupEffectTarget*>* (::GlobalNamespace::FloatFxGroup::*)()>(&::GlobalNamespace::FloatFxGroup::get_targets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a5808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroup*>::get(),
                            "get_targets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroup::*)()>(&::GlobalNamespace::FloatFxGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a5810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FloatFxGroup::__set__isTriggerOnly(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::FloatFxGroup::__get__isTriggerOnly()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& GlobalNamespace::FloatFxGroup::__get__isTriggerOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void GlobalNamespace::FloatFxGroup::__set__targets(::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>* GlobalNamespace::FloatFxGroup::__get__targets()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>*> GlobalNamespace::FloatFxGroup::__get__targets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>*, 0x28>(this);
}
inline bool GlobalNamespace::FloatFxGroup::get_isTriggerOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroup*>::get(),
                            "get_isTriggerOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxGroupEffectTarget*>* GlobalNamespace::FloatFxGroup::get_targets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroup*>::get(),
                            "get_targets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxGroupEffectTarget*>*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::FloatFxGroup* GlobalNamespace::FloatFxGroup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FloatFxGroup*>());
}
inline void GlobalNamespace::FloatFxGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
