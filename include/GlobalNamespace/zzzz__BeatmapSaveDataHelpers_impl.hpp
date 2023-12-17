#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapSaveDataHelpers_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapSaveDataHelpers_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData.get_v
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::*)()>(&::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::get_v)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xe05124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData*>::get(),
                            "get_v",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::*)()>(&::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe05154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::__set__version(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::__get__version()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::__get__version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::__set_version(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::__get_version()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::__get_version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::StringW GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::get_v()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData*>::get(),
                            "get_v",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData* GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData*>());
}
inline void GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveDataHelpers__VersionSerializedData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::BeatmapSaveDataHelpers.GetVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)(::StringW)>(&::GlobalNamespace::BeatmapSaveDataHelpers::GetVersion)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xe05078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSaveDataHelpers*>::get(),
                            "GetVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
inline ::System::Version* GlobalNamespace::BeatmapSaveDataHelpers::GetVersion(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSaveDataHelpers*>::get(),
                            "GetVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(nullptr, ___internal_method, data);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
