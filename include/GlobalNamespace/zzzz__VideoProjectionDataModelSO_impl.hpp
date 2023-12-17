#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionDataModelSO_def.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionDataModelSO_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReference_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::*)()>(&::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b2e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId.get_videoAssetReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::AssetReference* (::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::*)()>(&::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::get_videoAssetReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b2e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>::get(),
                            "get_videoAssetReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::*)()>(&::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b2e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::__set__id(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::__get__id()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::__get__id() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::__set__videoAssetReference(::UnityEngine::AddressableAssets::AssetReference*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AddressableAssets::AssetReference*, 0x18>(this, std::forward<::UnityEngine::AddressableAssets::AssetReference*>(value));
}
constexpr ::UnityEngine::AddressableAssets::AssetReference* GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::__get__videoAssetReference()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AddressableAssets::AssetReference*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReference*> GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::__get__videoAssetReference() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AddressableAssets::AssetReference*, 0x18>(this);
}
inline int32_t GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AssetReference* GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::get_videoAssetReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>::get(),
                            "get_videoAssetReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AssetReference*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId* GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>());
}
inline void GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionDataModelSO.get_videoClipWithIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*,::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*> (::GlobalNamespace::VideoProjectionDataModelSO::*)()>(&::GlobalNamespace::VideoProjectionDataModelSO::get_videoClipWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b2e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionDataModelSO*>::get(),
                            "get_videoClipWithIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionDataModelSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VideoProjectionDataModelSO::*)()>(&::GlobalNamespace::VideoProjectionDataModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b2e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionDataModelSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::VideoProjectionDataModelSO::__set__videoClipsWithId(::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*,::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*,::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*,::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*,::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*>& GlobalNamespace::VideoProjectionDataModelSO::__get__videoClipsWithId()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*,::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*,::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*> const& GlobalNamespace::VideoProjectionDataModelSO::__get__videoClipsWithId() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*,::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*>, 0x18>(this);
}
inline ::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*,::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*> GlobalNamespace::VideoProjectionDataModelSO::get_videoClipWithIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionDataModelSO*>::get(),
                            "get_videoClipWithIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*,::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*>, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::VideoProjectionDataModelSO* GlobalNamespace::VideoProjectionDataModelSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::VideoProjectionDataModelSO*>());
}
inline void GlobalNamespace::VideoProjectionDataModelSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionDataModelSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
