#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelColorSchemeSaveData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelColorSchemeSaveData.IsDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelColorSchemeSaveData::*)()>(&::GlobalNamespace::BeatmapLevelColorSchemeSaveData::IsDefault)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x233dd28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>::get(),
                            "IsDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelColorSchemeSaveData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelColorSchemeSaveData::*)()>(&::GlobalNamespace::BeatmapLevelColorSchemeSaveData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233de84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapLevelColorSchemeSaveData::__set_useOverride(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::BeatmapLevelColorSchemeSaveData::__get_useOverride()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::BeatmapLevelColorSchemeSaveData::__get_useOverride() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::BeatmapLevelColorSchemeSaveData::__set_colorScheme(::GlobalNamespace::__PlayerSaveData__ColorScheme*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__ColorScheme*, 0x18>(this, std::forward<::GlobalNamespace::__PlayerSaveData__ColorScheme*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__ColorScheme* GlobalNamespace::BeatmapLevelColorSchemeSaveData::__get_colorScheme()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__ColorScheme*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__ColorScheme*> GlobalNamespace::BeatmapLevelColorSchemeSaveData::__get_colorScheme() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__ColorScheme*, 0x18>(this);
}
inline bool GlobalNamespace::BeatmapLevelColorSchemeSaveData::IsDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>::get(),
                            "IsDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelColorSchemeSaveData* GlobalNamespace::BeatmapLevelColorSchemeSaveData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>());
}
inline void GlobalNamespace::BeatmapLevelColorSchemeSaveData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelColorSchemeSaveData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
