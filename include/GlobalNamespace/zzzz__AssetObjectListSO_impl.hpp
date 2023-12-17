#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AssetObjectListSO_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AssetObjectListSO.get_objects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*> (::GlobalNamespace::AssetObjectListSO::*)()>(&::GlobalNamespace::AssetObjectListSO::get_objects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eb0b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AssetObjectListSO*>::get(),
                            "get_objects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AssetObjectListSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AssetObjectListSO::*)()>(&::GlobalNamespace::AssetObjectListSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eb0bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AssetObjectListSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AssetObjectListSO::__set__objects(::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>, 0x18>(this, std::forward<::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>& GlobalNamespace::AssetObjectListSO::__get__objects()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>, 0x18>(this);
}
constexpr ::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*> const& GlobalNamespace::AssetObjectListSO::__get__objects() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>, 0x18>(this);
}
inline ::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*> GlobalNamespace::AssetObjectListSO::get_objects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AssetObjectListSO*>::get(),
                            "get_objects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::AssetObjectListSO* GlobalNamespace::AssetObjectListSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AssetObjectListSO*>());
}
inline void GlobalNamespace::AssetObjectListSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AssetObjectListSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
