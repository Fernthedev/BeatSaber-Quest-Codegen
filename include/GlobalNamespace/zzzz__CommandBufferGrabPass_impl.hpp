#pragma once
#include "GlobalNamespace/zzzz__CommandBufferGOCore_impl.hpp"
#include "GlobalNamespace/zzzz__CommandBufferGrabPass_def.hpp"
#include "GlobalNamespace/zzzz__CommandBufferOwners_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGrabPass.CreateCommandBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CommandBuffer* (::GlobalNamespace::CommandBufferGrabPass::*)(::UnityEngine::Camera*)>(&::GlobalNamespace::CommandBufferGrabPass::CreateCommandBuffer)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x28065ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGrabPass.CamerasDict
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*,::GlobalNamespace::CommandBufferOwners*>* (::GlobalNamespace::CommandBufferGrabPass::*)()>(&::GlobalNamespace::CommandBufferGrabPass::CamerasDict)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x28067d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGrabPass.CommandBufferCameraEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CameraEvent (::GlobalNamespace::CommandBufferGrabPass::*)()>(&::GlobalNamespace::CommandBufferGrabPass::CommandBufferCameraEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2806830;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CommandBufferGrabPass._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CommandBufferGrabPass::*)()>(&::GlobalNamespace::CommandBufferGrabPass::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2806838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CommandBufferGrabPass::__set__textureName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::CommandBufferGrabPass::__get__textureName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& GlobalNamespace::CommandBufferGrabPass::__get__textureName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void GlobalNamespace::CommandBufferGrabPass::__set__cameraEvent(::UnityEngine::Rendering::CameraEvent  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::CameraEvent, 0x30>(this, std::forward<::UnityEngine::Rendering::CameraEvent>(value));
}
constexpr ::UnityEngine::Rendering::CameraEvent& GlobalNamespace::CommandBufferGrabPass::__get__cameraEvent()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::CameraEvent, 0x30>(this);
}
constexpr ::UnityEngine::Rendering::CameraEvent const& GlobalNamespace::CommandBufferGrabPass::__get__cameraEvent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::CameraEvent, 0x30>(this);
}
inline void GlobalNamespace::CommandBufferGrabPass::setStaticF__cameras(::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*,::GlobalNamespace::CommandBufferOwners*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*,::GlobalNamespace::CommandBufferOwners*>*, "_cameras", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*,::GlobalNamespace::CommandBufferOwners*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*,::GlobalNamespace::CommandBufferOwners*>* GlobalNamespace::CommandBufferGrabPass::getStaticF__cameras()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*,::GlobalNamespace::CommandBufferOwners*>*, "_cameras", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get>();
}
inline ::UnityEngine::Rendering::CommandBuffer* GlobalNamespace::CommandBufferGrabPass::CreateCommandBuffer(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(),
                            "CreateCommandBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*, false>(*this, ___internal_method, camera);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*,::GlobalNamespace::CommandBufferOwners*>* GlobalNamespace::CommandBufferGrabPass::CamerasDict()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(),
                            "CamerasDict",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*,::GlobalNamespace::CommandBufferOwners*>*, false>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::CameraEvent GlobalNamespace::CommandBufferGrabPass::CommandBufferCameraEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(),
                            "CommandBufferCameraEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CameraEvent, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::CommandBufferGrabPass* GlobalNamespace::CommandBufferGrabPass::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CommandBufferGrabPass*>());
}
inline void GlobalNamespace::CommandBufferGrabPass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CommandBufferGrabPass*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
