#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LineLightManager_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LineLightManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LineLightManager::*)()>(&::GlobalNamespace::LineLightManager::Update)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x2114414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LineLightManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LineLightManager::*)()>(&::GlobalNamespace::LineLightManager::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2114784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LineLightManager::__set__points(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x18>(this, std::forward<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& GlobalNamespace::LineLightManager::__get__points()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x18>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::LineLightManager::__get__points() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x18>(this);
}
constexpr void GlobalNamespace::LineLightManager::__set__dirs(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x20>(this, std::forward<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& GlobalNamespace::LineLightManager::__get__dirs()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x20>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::LineLightManager::__get__dirs() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x20>(this);
}
constexpr void GlobalNamespace::LineLightManager::__set__dirLengths(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x28>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& GlobalNamespace::LineLightManager::__get__dirLengths()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x28>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& GlobalNamespace::LineLightManager::__get__dirLengths() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x28>(this);
}
constexpr void GlobalNamespace::LineLightManager::__set__colors(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x30>(this, std::forward<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& GlobalNamespace::LineLightManager::__get__colors()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x30>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::LineLightManager::__get__colors() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x30>(this);
}
inline void GlobalNamespace::LineLightManager::setStaticF__activeLineLightsCountID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_activeLineLightsCountID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LineLightManager::getStaticF__activeLineLightsCountID()  {
return ::cordl_internals::getStaticField<int32_t, "_activeLineLightsCountID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>();
}
inline void GlobalNamespace::LineLightManager::setStaticF__lineLightPointsID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_lineLightPointsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LineLightManager::getStaticF__lineLightPointsID()  {
return ::cordl_internals::getStaticField<int32_t, "_lineLightPointsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>();
}
inline void GlobalNamespace::LineLightManager::setStaticF__lineLightDirsID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_lineLightDirsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LineLightManager::getStaticF__lineLightDirsID()  {
return ::cordl_internals::getStaticField<int32_t, "_lineLightDirsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>();
}
inline void GlobalNamespace::LineLightManager::setStaticF__lineLightDirLengthsID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_lineLightDirLengthsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LineLightManager::getStaticF__lineLightDirLengthsID()  {
return ::cordl_internals::getStaticField<int32_t, "_lineLightDirLengthsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>();
}
inline void GlobalNamespace::LineLightManager::setStaticF__lineLightColorsID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_lineLightColorsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LineLightManager::getStaticF__lineLightColorsID()  {
return ::cordl_internals::getStaticField<int32_t, "_lineLightColorsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get>();
}
inline void GlobalNamespace::LineLightManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::LineLightManager* GlobalNamespace::LineLightManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LineLightManager*>());
}
inline void GlobalNamespace::LineLightManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LineLightManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
