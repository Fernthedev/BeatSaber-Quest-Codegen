#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeScatterTrees_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TreePrototypeInfo_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeScatterTrees.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_VolumeScatterTrees::*)(::HoudiniEngineUnity::HEU_VolumeScatterTrees*)>(&::HoudiniEngineUnity::HEU_VolumeScatterTrees::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x21ea13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeScatterTrees._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeScatterTrees::*)()>(&::HoudiniEngineUnity::HEU_VolumeScatterTrees::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ea4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>"
constexpr  HoudiniEngineUnity::HEU_VolumeScatterTrees::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>*() noexcept {
return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>*>(static_cast<void*>(this));
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__treePrototypInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>* HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__treePrototypInfos()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*> HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__treePrototypInfos() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__colors(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>, 0x18>(this, std::forward<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__colors()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>, 0x18>(this);
}
constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> const& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__colors() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__heightScales(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x20>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__heightScales()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x20>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__heightScales() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__lightmapColors(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>, 0x28>(this, std::forward<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__lightmapColors()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>, 0x28>(this);
}
constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> const& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__lightmapColors() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>, 0x28>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__positions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x30>(this, std::forward<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__positions()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x30>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__positions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__prototypeIndices(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x38>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__prototypeIndices()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x38>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__prototypeIndices() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x38>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__rotations(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x40>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__rotations()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x40>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__rotations() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x40>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__widthScales(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x48>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__widthScales()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x48>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__widthScales() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x48>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__terrainTiles(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x50>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__terrainTiles()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x50>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__terrainTiles() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x50>(this);
}
inline bool HoudiniEngineUnity::HEU_VolumeScatterTrees::IsEquivalentTo(::HoudiniEngineUnity::HEU_VolumeScatterTrees*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_VolumeScatterTrees* HoudiniEngineUnity::HEU_VolumeScatterTrees::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>());
}
inline void HoudiniEngineUnity::HEU_VolumeScatterTrees::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
