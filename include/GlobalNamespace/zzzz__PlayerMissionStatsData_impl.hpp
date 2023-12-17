#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerMissionStatsData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerMissionStatsData.get_missionId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlayerMissionStatsData::*)()>(&::GlobalNamespace::PlayerMissionStatsData::get_missionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23727ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerMissionStatsData*>::get(),
                            "get_missionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMissionStatsData.get_cleared
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayerMissionStatsData::*)()>(&::GlobalNamespace::PlayerMissionStatsData::get_cleared)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23727b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerMissionStatsData*>::get(),
                            "get_cleared",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMissionStatsData.set_cleared
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerMissionStatsData::*)(bool)>(&::GlobalNamespace::PlayerMissionStatsData::set_cleared)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23727bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerMissionStatsData*>::get(),
                            "set_cleared",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMissionStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerMissionStatsData::*)(::StringW, bool)>(&::GlobalNamespace::PlayerMissionStatsData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23727c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerMissionStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PlayerMissionStatsData::__set__missionId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::PlayerMissionStatsData::__get__missionId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::PlayerMissionStatsData::__get__missionId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::PlayerMissionStatsData::__set__cleared(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::PlayerMissionStatsData::__get__cleared()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::PlayerMissionStatsData::__get__cleared() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
inline ::StringW GlobalNamespace::PlayerMissionStatsData::get_missionId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerMissionStatsData*>::get(),
                            "get_missionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::PlayerMissionStatsData::get_cleared()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerMissionStatsData*>::get(),
                            "get_cleared",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerMissionStatsData::set_cleared(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerMissionStatsData*>::get(),
                            "set_cleared",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerMissionStatsData* GlobalNamespace::PlayerMissionStatsData::New_ctor(::StringW  missionId, bool  cleared)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlayerMissionStatsData*>(missionId, cleared));
}
inline void GlobalNamespace::PlayerMissionStatsData::_ctor(::StringW  missionId, bool  cleared)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerMissionStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, missionId, cleared);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
