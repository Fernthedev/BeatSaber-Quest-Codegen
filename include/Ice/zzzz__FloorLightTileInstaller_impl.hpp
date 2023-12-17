#pragma once
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "Ice/zzzz__FloorLightTileInstaller_def.hpp"
#include "Ice/zzzz__FloorLightTile_def.hpp"
//  Writing Method size for method: ::Ice::FloorLightTileInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Ice::FloorLightTileInstaller::*)()>(&::Ice::FloorLightTileInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x129fce4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTileInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTileInstaller*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTileInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Ice::FloorLightTileInstaller::*)()>(&::Ice::FloorLightTileInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x129fd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTileInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Ice::FloorLightTileInstaller::__set__floorLightTilePrefab(::Ice::FloorLightTile*  value)  {
::cordl_internals::setInstanceField<::Ice::FloorLightTile*, 0x20>(this, std::forward<::Ice::FloorLightTile*>(value));
}
constexpr ::Ice::FloorLightTile* Ice::FloorLightTileInstaller::__get__floorLightTilePrefab()  {
return ::cordl_internals::getInstanceField<::Ice::FloorLightTile*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Ice::FloorLightTile*> Ice::FloorLightTileInstaller::__get__floorLightTilePrefab() const {
return ::cordl_internals::getInstanceField<::Ice::FloorLightTile*, 0x20>(this);
}
inline void Ice::FloorLightTileInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTileInstaller*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Ice::FloorLightTileInstaller* Ice::FloorLightTileInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Ice::FloorLightTileInstaller*>());
}
inline void Ice::FloorLightTileInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTileInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
