#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockController.get_renderers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*> (::GlobalNamespace::MaterialPropertyBlockController::*)()>(&::GlobalNamespace::MaterialPropertyBlockController::get_renderers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2115060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockController*>::get(),
                            "get_renderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockController.get_materialPropertyBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MaterialPropertyBlock* (::GlobalNamespace::MaterialPropertyBlockController::*)()>(&::GlobalNamespace::MaterialPropertyBlockController::get_materialPropertyBlock)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2114d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockController*>::get(),
                            "get_materialPropertyBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockController.ApplyChanges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockController::*)()>(&::GlobalNamespace::MaterialPropertyBlockController::ApplyChanges)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2114afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockController*>::get(),
                            "ApplyChanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockController::*)()>(&::GlobalNamespace::MaterialPropertyBlockController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2115068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MaterialPropertyBlockController::__set__renderers(::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>, 0x18>(this, std::forward<::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>& GlobalNamespace::MaterialPropertyBlockController::__get__renderers()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>, 0x18>(this);
}
constexpr ::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*> const& GlobalNamespace::MaterialPropertyBlockController::__get__renderers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::MaterialPropertyBlockController::__set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MaterialPropertyBlock*, 0x20>(this, std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
constexpr ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::MaterialPropertyBlockController::__get__materialPropertyBlock()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MaterialPropertyBlock*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> GlobalNamespace::MaterialPropertyBlockController::__get__materialPropertyBlock() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MaterialPropertyBlock*, 0x20>(this);
}
constexpr void GlobalNamespace::MaterialPropertyBlockController::__set__numberOfMaterialsInRenderers(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::MaterialPropertyBlockController::__get__numberOfMaterialsInRenderers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> GlobalNamespace::MaterialPropertyBlockController::__get__numberOfMaterialsInRenderers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x28>(this);
}
constexpr void GlobalNamespace::MaterialPropertyBlockController::__set__isInitialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MaterialPropertyBlockController::__get__isInitialized()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& GlobalNamespace::MaterialPropertyBlockController::__get__isInitialized() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
inline ::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*> GlobalNamespace::MaterialPropertyBlockController::get_renderers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockController*>::get(),
                            "get_renderers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>, false>(*this, ___internal_method);
}
inline ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::MaterialPropertyBlockController::get_materialPropertyBlock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockController*>::get(),
                            "get_materialPropertyBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockController::ApplyChanges()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockController*>::get(),
                            "ApplyChanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyBlockController* GlobalNamespace::MaterialPropertyBlockController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MaterialPropertyBlockController*>());
}
inline void GlobalNamespace::MaterialPropertyBlockController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
