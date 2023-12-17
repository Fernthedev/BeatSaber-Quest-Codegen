#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SceneContextRegistryAdderAndRemover_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SceneContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__SceneContextRegistry_def.hpp"
//  Writing Method size for method: ::Zenject::SceneContextRegistryAdderAndRemover._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SceneContextRegistryAdderAndRemover::*)(::Zenject::SceneContext*, ::Zenject::SceneContextRegistry*)>(&::Zenject::SceneContextRegistryAdderAndRemover::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2f18998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContextRegistry*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistryAdderAndRemover.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SceneContextRegistryAdderAndRemover::*)()>(&::Zenject::SceneContextRegistryAdderAndRemover::Initialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2f189c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistryAdderAndRemover.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SceneContextRegistryAdderAndRemover::*)()>(&::Zenject::SceneContextRegistryAdderAndRemover::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2f189e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistryAdderAndRemover.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::SceneContextRegistryAdderAndRemover::__zenCreate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2f18a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContextRegistryAdderAndRemover.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SceneContextRegistryAdderAndRemover::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2f18b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr  Zenject::SceneContextRegistryAdderAndRemover::operator ::Zenject::IInitializable*() noexcept {
return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Zenject::SceneContextRegistryAdderAndRemover::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void Zenject::SceneContextRegistryAdderAndRemover::__set__registry(::Zenject::SceneContextRegistry*  value)  {
::cordl_internals::setInstanceField<::Zenject::SceneContextRegistry*, 0x10>(this, std::forward<::Zenject::SceneContextRegistry*>(value));
}
constexpr ::Zenject::SceneContextRegistry* Zenject::SceneContextRegistryAdderAndRemover::__get__registry()  {
return ::cordl_internals::getInstanceField<::Zenject::SceneContextRegistry*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SceneContextRegistry*> Zenject::SceneContextRegistryAdderAndRemover::__get__registry() const {
return ::cordl_internals::getInstanceField<::Zenject::SceneContextRegistry*, 0x10>(this);
}
constexpr void Zenject::SceneContextRegistryAdderAndRemover::__set__sceneContext(::Zenject::SceneContext*  value)  {
::cordl_internals::setInstanceField<::Zenject::SceneContext*, 0x18>(this, std::forward<::Zenject::SceneContext*>(value));
}
constexpr ::Zenject::SceneContext* Zenject::SceneContextRegistryAdderAndRemover::__get__sceneContext()  {
return ::cordl_internals::getInstanceField<::Zenject::SceneContext*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::SceneContext*> Zenject::SceneContextRegistryAdderAndRemover::__get__sceneContext() const {
return ::cordl_internals::getInstanceField<::Zenject::SceneContext*, 0x18>(this);
}
inline ::Zenject::SceneContextRegistryAdderAndRemover* Zenject::SceneContextRegistryAdderAndRemover::New_ctor(::Zenject::SceneContext*  sceneContext, ::Zenject::SceneContextRegistry*  registry)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SceneContextRegistryAdderAndRemover*>(sceneContext, registry));
}
inline void Zenject::SceneContextRegistryAdderAndRemover::_ctor(::Zenject::SceneContext*  sceneContext, ::Zenject::SceneContextRegistry*  registry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContextRegistry*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sceneContext, registry);
}
inline void Zenject::SceneContextRegistryAdderAndRemover::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Zenject::SceneContextRegistryAdderAndRemover::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* Zenject::SceneContextRegistryAdderAndRemover::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SceneContextRegistryAdderAndRemover::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SceneContextRegistryAdderAndRemover*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
