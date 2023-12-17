#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RelativeSfxVolumePerLevelModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RelativeSfxVolumePerLevelModel::*)(::GlobalNamespace::RelativeSfxVolumePerLevelSO*)>(&::GlobalNamespace::RelativeSfxVolumePerLevelModel::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x234d86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumePerLevelModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RelativeSfxVolumePerLevelSO*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RelativeSfxVolumePerLevelModel.GetRelativeSfxVolume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::RelativeSfxVolumePerLevelModel::*)(::StringW)>(&::GlobalNamespace::RelativeSfxVolumePerLevelModel::GetRelativeSfxVolume)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x234da20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumePerLevelModel*>::get(),
                            "GetRelativeSfxVolume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RelativeSfxVolumePerLevelModel::__set__relativeSfxVolumePerLevelId(::System::Collections::Generic::Dictionary_2<::StringW,float_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,float_t>*, 0x10>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,float_t>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,float_t>* GlobalNamespace::RelativeSfxVolumePerLevelModel::__get__relativeSfxVolumePerLevelId()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,float_t>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,float_t>*> GlobalNamespace::RelativeSfxVolumePerLevelModel::__get__relativeSfxVolumePerLevelId() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,float_t>*, 0x10>(this);
}
inline ::GlobalNamespace::RelativeSfxVolumePerLevelModel* GlobalNamespace::RelativeSfxVolumePerLevelModel::New_ctor(::GlobalNamespace::RelativeSfxVolumePerLevelSO*  relativeSfxVolumePerLevelData)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RelativeSfxVolumePerLevelModel*>(relativeSfxVolumePerLevelData));
}
inline void GlobalNamespace::RelativeSfxVolumePerLevelModel::_ctor(::GlobalNamespace::RelativeSfxVolumePerLevelSO*  relativeSfxVolumePerLevelData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumePerLevelModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RelativeSfxVolumePerLevelSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, relativeSfxVolumePerLevelData);
}
inline float_t GlobalNamespace::RelativeSfxVolumePerLevelModel::GetRelativeSfxVolume(::StringW  levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RelativeSfxVolumePerLevelModel*>::get(),
                            "GetRelativeSfxVolume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, levelId);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
