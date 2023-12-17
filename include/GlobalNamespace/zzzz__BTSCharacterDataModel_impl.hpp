#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterDataModel_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterDataModel_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReference_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::*)()>(&::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId.get_prefabAssetReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::AssetReference* (::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::*)()>(&::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::get_prefabAssetReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>::get(),
                            "get_prefabAssetReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::*)()>(&::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::__set__id(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::__get__id()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::__get__id() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::__set__prefabAssetReference(::UnityEngine::AddressableAssets::AssetReference*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AddressableAssets::AssetReference*, 0x18>(this, std::forward<::UnityEngine::AddressableAssets::AssetReference*>(value));
}
constexpr ::UnityEngine::AddressableAssets::AssetReference* GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::__get__prefabAssetReference()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AddressableAssets::AssetReference*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReference*> GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::__get__prefabAssetReference() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AddressableAssets::AssetReference*, 0x18>(this);
}
inline int32_t GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AssetReference* GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::get_prefabAssetReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>::get(),
                            "get_prefabAssetReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AssetReference*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId* GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>());
}
inline void GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::*)()>(&::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId.get_animationClipAssetReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::AssetReference* (::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::*)()>(&::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::get_animationClipAssetReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>::get(),
                            "get_animationClipAssetReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::*)()>(&::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::__set__id(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::__get__id()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::__get__id() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::__set__animationClipAssetReference(::UnityEngine::AddressableAssets::AssetReference*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AddressableAssets::AssetReference*, 0x18>(this, std::forward<::UnityEngine::AddressableAssets::AssetReference*>(value));
}
constexpr ::UnityEngine::AddressableAssets::AssetReference* GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::__get__animationClipAssetReference()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AddressableAssets::AssetReference*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReference*> GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::__get__animationClipAssetReference() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AddressableAssets::AssetReference*, 0x18>(this);
}
inline int32_t GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AssetReference* GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::get_animationClipAssetReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>::get(),
                            "get_animationClipAssetReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AssetReference*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId* GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>());
}
inline void GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterDataModel.get_prefabsWithIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> (::GlobalNamespace::BTSCharacterDataModel::*)()>(&::GlobalNamespace::BTSCharacterDataModel::get_prefabsWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterDataModel*>::get(),
                            "get_prefabsWithIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterDataModel.get_animationClipsWithIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> (::GlobalNamespace::BTSCharacterDataModel::*)()>(&::GlobalNamespace::BTSCharacterDataModel::get_animationClipsWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterDataModel*>::get(),
                            "get_animationClipsWithIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterDataModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacterDataModel::*)()>(&::GlobalNamespace::BTSCharacterDataModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterDataModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BTSCharacterDataModel::__set__prefabsWithIds(::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*>& GlobalNamespace::BTSCharacterDataModel::__get__prefabsWithIds()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> const& GlobalNamespace::BTSCharacterDataModel::__get__prefabsWithIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::BTSCharacterDataModel::__set__animationClipsWithIds(::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*>, 0x20>(this, std::forward<::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*>& GlobalNamespace::BTSCharacterDataModel::__get__animationClipsWithIds()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*>, 0x20>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> const& GlobalNamespace::BTSCharacterDataModel::__get__animationClipsWithIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*>, 0x20>(this);
}
inline ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> GlobalNamespace::BTSCharacterDataModel::get_prefabsWithIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterDataModel*>::get(),
                            "get_prefabsWithIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*>, false>(*this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> GlobalNamespace::BTSCharacterDataModel::get_animationClipsWithIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterDataModel*>::get(),
                            "get_animationClipsWithIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*,::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*>, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BTSCharacterDataModel* GlobalNamespace::BTSCharacterDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BTSCharacterDataModel*>());
}
inline void GlobalNamespace::BTSCharacterDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterDataModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
