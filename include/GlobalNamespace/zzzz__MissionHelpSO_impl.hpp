#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MissionHelpSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionHelpSO.get_missionHelpId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MissionHelpSO::*)()>(&::GlobalNamespace::MissionHelpSO::get_missionHelpId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpSO*>::get(),
                            "get_missionHelpId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionHelpSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionHelpSO::*)()>(&::GlobalNamespace::MissionHelpSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2352ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionHelpSO::__set__missionHelpId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::MissionHelpSO::__get__missionHelpId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::MissionHelpSO::__get__missionHelpId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::StringW GlobalNamespace::MissionHelpSO::get_missionHelpId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpSO*>::get(),
                            "get_missionHelpId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MissionHelpSO* GlobalNamespace::MissionHelpSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionHelpSO*>());
}
inline void GlobalNamespace::MissionHelpSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionHelpSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
