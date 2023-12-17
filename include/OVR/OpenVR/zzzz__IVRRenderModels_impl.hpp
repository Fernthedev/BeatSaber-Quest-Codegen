#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRRenderModels_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_ComponentState_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_def.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_ControllerMode_State_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVRRenderModelError_def.hpp"
#include "OVR/OpenVR/zzzz__IVRRenderModels_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27e8b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async::*)(::StringW, ByRef<::cordl_internals::intptr_t>)>(&::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e8bf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async::*)(::StringW, ByRef<::cordl_internals::intptr_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x27e8c04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async::*)(ByRef<::cordl_internals::intptr_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27e8c98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async* OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async::Invoke(::StringW  pchRenderModelName, ByRef<::cordl_internals::intptr_t>  ppRenderModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(*this, ___internal_method, pchRenderModelName, ppRenderModel);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async::BeginInvoke(::StringW  pchRenderModelName, ByRef<::cordl_internals::intptr_t>  ppRenderModel, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pchRenderModelName, ppRenderModel, callback, object);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async::EndInvoke(ByRef<::cordl_internals::intptr_t>  ppRenderModel, ::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(*this, ___internal_method, ppRenderModel, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___FreeRenderModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___FreeRenderModel::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___FreeRenderModel::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e8cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___FreeRenderModel.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___FreeRenderModel::*)(::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___FreeRenderModel::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e8d88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___FreeRenderModel.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___FreeRenderModel::*)(::cordl_internals::intptr_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___FreeRenderModel::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27e8d9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___FreeRenderModel.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___FreeRenderModel::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___FreeRenderModel::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27e8e20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___FreeRenderModel* OVR::OpenVR::__IVRRenderModels___FreeRenderModel::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___FreeRenderModel::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRRenderModels___FreeRenderModel::Invoke(::cordl_internals::intptr_t  pRenderModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pRenderModel);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___FreeRenderModel::BeginInvoke(::cordl_internals::intptr_t  pRenderModel, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pRenderModel, callback, object);
}
inline void OVR::OpenVR::__IVRRenderModels___FreeRenderModel::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e8e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async::*)(int32_t, ByRef<::cordl_internals::intptr_t>)>(&::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e8ef0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async::*)(int32_t, ByRef<::cordl_internals::intptr_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x27e8f04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async::*)(ByRef<::cordl_internals::intptr_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27e8fbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async* OVR::OpenVR::__IVRRenderModels___LoadTexture_Async::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___LoadTexture_Async::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::__IVRRenderModels___LoadTexture_Async::Invoke(int32_t  textureId, ByRef<::cordl_internals::intptr_t>  ppTexture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(*this, ___internal_method, textureId, ppTexture);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___LoadTexture_Async::BeginInvoke(int32_t  textureId, ByRef<::cordl_internals::intptr_t>  ppTexture, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, textureId, ppTexture, callback, object);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::__IVRRenderModels___LoadTexture_Async::EndInvoke(ByRef<::cordl_internals::intptr_t>  ppTexture, ::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(*this, ___internal_method, ppTexture, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___FreeTexture._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___FreeTexture::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___FreeTexture::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e8fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTexture*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___FreeTexture.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___FreeTexture::*)(::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___FreeTexture::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e90ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTexture*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTexture*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___FreeTexture.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___FreeTexture::*)(::cordl_internals::intptr_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___FreeTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27e90c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTexture*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTexture*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___FreeTexture.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___FreeTexture::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___FreeTexture::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27e9144;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTexture*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTexture*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___FreeTexture* OVR::OpenVR::__IVRRenderModels___FreeTexture::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___FreeTexture*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___FreeTexture::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTexture*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRRenderModels___FreeTexture::Invoke(::cordl_internals::intptr_t  pTexture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTexture*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pTexture);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___FreeTexture::BeginInvoke(::cordl_internals::intptr_t  pTexture, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTexture*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pTexture, callback, object);
}
inline void OVR::OpenVR::__IVRRenderModels___FreeTexture::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTexture*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e9150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async::*)(int32_t, ::cordl_internals::intptr_t, ByRef<::cordl_internals::intptr_t>)>(&::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e9214;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async::*)(int32_t, ::cordl_internals::intptr_t, ByRef<::cordl_internals::intptr_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x27e9228;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async::*)(ByRef<::cordl_internals::intptr_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27e92f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async* OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async::Invoke(int32_t  textureId, ::cordl_internals::intptr_t  pD3D11Device, ByRef<::cordl_internals::intptr_t>  ppD3D11Texture2D)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(*this, ___internal_method, textureId, pD3D11Device, ppD3D11Texture2D);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async::BeginInvoke(int32_t  textureId, ::cordl_internals::intptr_t  pD3D11Device, ByRef<::cordl_internals::intptr_t>  ppD3D11Texture2D, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, textureId, pD3D11Device, ppD3D11Texture2D, callback, object);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async::EndInvoke(ByRef<::cordl_internals::intptr_t>  ppD3D11Texture2D, ::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(*this, ___internal_method, ppD3D11Texture2D, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e9324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async::*)(int32_t, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e93e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async::*)(int32_t, ::cordl_internals::intptr_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27e93fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27e94b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async* OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async::Invoke(int32_t  textureId, ::cordl_internals::intptr_t  pDstTexture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(*this, ___internal_method, textureId, pDstTexture);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async::BeginInvoke(int32_t  textureId, ::cordl_internals::intptr_t  pDstTexture, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, textureId, pDstTexture, callback, object);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e94d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11::*)(::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e959c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11::*)(::cordl_internals::intptr_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27e95b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27e9634;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11* OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11::Invoke(::cordl_internals::intptr_t  pD3D11Texture2D)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pD3D11Texture2D);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11::BeginInvoke(::cordl_internals::intptr_t  pD3D11Texture2D, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pD3D11Texture2D, callback, object);
}
inline void OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelName._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___GetRenderModelName::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelName::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27e9640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelName.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRRenderModels___GetRenderModelName::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e9704;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelName.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___GetRenderModelName::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelName::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x27e9718;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelName.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRRenderModels___GetRenderModelName::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelName::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27e97bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___GetRenderModelName* OVR::OpenVR::__IVRRenderModels___GetRenderModelName::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___GetRenderModelName::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRRenderModels___GetRenderModelName::Invoke(uint32_t  unRenderModelIndex, ::System::Text::StringBuilder*  pchRenderModelName, uint32_t  unRenderModelNameLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, unRenderModelIndex, pchRenderModelName, unRenderModelNameLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___GetRenderModelName::BeginInvoke(uint32_t  unRenderModelIndex, ::System::Text::StringBuilder*  pchRenderModelName, uint32_t  unRenderModelNameLen, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, unRenderModelIndex, pchRenderModelName, unRenderModelNameLen, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRRenderModels___GetRenderModelName::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27e97e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount::*)()>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e98a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27e98b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27e98d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount* OVR::OpenVR::__IVRRenderModels___GetRenderModelCount::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___GetRenderModelCount::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRRenderModels___GetRenderModelCount::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___GetRenderModelCount::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRRenderModels___GetRenderModelCount::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentCount._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___GetComponentCount::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentCount::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x27e98fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentCount*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentCount.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRRenderModels___GetComponentCount::*)(::StringW)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentCount::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e99d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentCount*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentCount*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentCount.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___GetComponentCount::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentCount::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27e99e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentCount*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentCount*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentCount.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRRenderModels___GetComponentCount::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentCount::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27e9a04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentCount*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentCount*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___GetComponentCount* OVR::OpenVR::__IVRRenderModels___GetComponentCount::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___GetComponentCount*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___GetComponentCount::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentCount*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRRenderModels___GetComponentCount::Invoke(::StringW  pchRenderModelName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentCount*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, pchRenderModelName);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___GetComponentCount::BeginInvoke(::StringW  pchRenderModelName, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentCount*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pchRenderModelName, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRRenderModels___GetComponentCount::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentCount*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentName._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___GetComponentName::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentName::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27e9a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentName*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentName.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRRenderModels___GetComponentName::*)(::StringW, uint32_t, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e9b04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentName*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentName*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentName.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___GetComponentName::*)(::StringW, uint32_t, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentName::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x27e9b18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentName*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentName*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentName.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRRenderModels___GetComponentName::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentName::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27e9bc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentName*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentName*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___GetComponentName* OVR::OpenVR::__IVRRenderModels___GetComponentName::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___GetComponentName*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___GetComponentName::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentName*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRRenderModels___GetComponentName::Invoke(::StringW  pchRenderModelName, uint32_t  unComponentIndex, ::System::Text::StringBuilder*  pchComponentName, uint32_t  unComponentNameLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentName*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___GetComponentName::BeginInvoke(::StringW  pchRenderModelName, uint32_t  unComponentIndex, ::System::Text::StringBuilder*  pchComponentName, uint32_t  unComponentNameLen, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentName*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRRenderModels___GetComponentName::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentName*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27e9bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask::*)(::StringW, ::StringW)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e9cc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27e9cd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27e9d00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask* OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline uint64_t OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask::Invoke(::StringW  pchRenderModelName, ::StringW  pchComponentName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(*this, ___internal_method, pchRenderModelName, pchComponentName);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask::BeginInvoke(::StringW  pchRenderModelName, ::StringW  pchComponentName, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pchRenderModelName, pchComponentName, callback, object);
}
inline uint64_t OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27e9d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e9e00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x27e9e14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27e9ebc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName* OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName::Invoke(::StringW  pchRenderModelName, ::StringW  pchComponentName, ::System::Text::StringBuilder*  pchComponentRenderModelName, uint32_t  unComponentRenderModelNameLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName::BeginInvoke(::StringW  pchRenderModelName, ::StringW  pchComponentName, ::System::Text::StringBuilder*  pchComponentRenderModelName, uint32_t  unComponentRenderModelNameLen, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27e9ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath::*)(::StringW, ::StringW, uint64_t, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27e9fbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath::*)(::StringW, ::StringW, uint64_t, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath::BeginInvoke)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x27e9fd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath::*)(ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27ea0d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath* OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath::Invoke(::StringW  pchRenderModelName, ::StringW  pchComponentName, uint64_t  devicePath, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>  pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>  pComponentState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pchRenderModelName, pchComponentName, devicePath, pState, pComponentState);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath::BeginInvoke(::StringW  pchRenderModelName, ::StringW  pchComponentName, uint64_t  devicePath, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>  pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>  pComponentState, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pchRenderModelName, pchComponentName, devicePath, pState, pComponentState, callback, object);
}
inline bool OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath::EndInvoke(ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>  pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>  pComponentState, ::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pState, pComponentState, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___GetComponentState::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentState::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27ea104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentState*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentState.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRRenderModels___GetComponentState::*)(::StringW, ::StringW, ByRef<::OVR::OpenVR::VRControllerState_t>, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentState::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27ea1dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentState*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentState*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentState.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___GetComponentState::*)(::StringW, ::StringW, ByRef<::OVR::OpenVR::VRControllerState_t>, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentState::BeginInvoke)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x27ea1f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentState*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentState*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetComponentState.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRRenderModels___GetComponentState::*)(ByRef<::OVR::OpenVR::VRControllerState_t>, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___GetComponentState::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27ea2f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentState*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentState*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___GetComponentState* OVR::OpenVR::__IVRRenderModels___GetComponentState::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___GetComponentState*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___GetComponentState::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentState*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRRenderModels___GetComponentState::Invoke(::StringW  pchRenderModelName, ::StringW  pchComponentName, ByRef<::OVR::OpenVR::VRControllerState_t>  pControllerState, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>  pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>  pComponentState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentState*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRControllerState_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___GetComponentState::BeginInvoke(::StringW  pchRenderModelName, ::StringW  pchComponentName, ByRef<::OVR::OpenVR::VRControllerState_t>  pControllerState, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>  pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>  pComponentState, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentState*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRControllerState_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState, callback, object);
}
inline bool OVR::OpenVR::__IVRRenderModels___GetComponentState::EndInvoke(ByRef<::OVR::OpenVR::VRControllerState_t>  pControllerState, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>  pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>  pComponentState, ::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetComponentState*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRControllerState_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pControllerState, pState, pComponentState, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27ea324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent::*)(::StringW, ::StringW)>(&::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27ea3fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27ea410;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27ea438;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent* OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent::Invoke(::StringW  pchRenderModelName, ::StringW  pchComponentName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pchRenderModelName, pchComponentName);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent::BeginInvoke(::StringW  pchRenderModelName, ::StringW  pchComponentName, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pchRenderModelName, pchComponentName, callback, object);
}
inline bool OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27ea460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL::*)(::StringW, ::System::Text::StringBuilder*, uint32_t, ByRef<::OVR::OpenVR::EVRRenderModelError>)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27ea538;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL::*)(::StringW, ::System::Text::StringBuilder*, uint32_t, ByRef<::OVR::OpenVR::EVRRenderModelError>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x27ea54c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL::*)(ByRef<::OVR::OpenVR::EVRRenderModelError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27ea618;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL* OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL::Invoke(::StringW  pchRenderModelName, ::System::Text::StringBuilder*  pchThumbnailURL, uint32_t  unThumbnailURLLen, ByRef<::OVR::OpenVR::EVRRenderModelError>  peError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRRenderModelError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, pchRenderModelName, pchThumbnailURL, unThumbnailURLLen, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL::BeginInvoke(::StringW  pchRenderModelName, ::System::Text::StringBuilder*  pchThumbnailURL, uint32_t  unThumbnailURLLen, ByRef<::OVR::OpenVR::EVRRenderModelError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRRenderModelError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pchRenderModelName, pchThumbnailURL, unThumbnailURLLen, peError, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL::EndInvoke(ByRef<::OVR::OpenVR::EVRRenderModelError>  peError, ::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRRenderModelError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, peError, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27ea644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath::*)(::StringW, ::System::Text::StringBuilder*, uint32_t, ByRef<::OVR::OpenVR::EVRRenderModelError>)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27ea71c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath::*)(::StringW, ::System::Text::StringBuilder*, uint32_t, ByRef<::OVR::OpenVR::EVRRenderModelError>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x27ea730;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath::*)(ByRef<::OVR::OpenVR::EVRRenderModelError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27ea7fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath* OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath::Invoke(::StringW  pchRenderModelName, ::System::Text::StringBuilder*  pchOriginalPath, uint32_t  unOriginalPathLen, ByRef<::OVR::OpenVR::EVRRenderModelError>  peError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRRenderModelError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, pchRenderModelName, pchOriginalPath, unOriginalPathLen, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath::BeginInvoke(::StringW  pchRenderModelName, ::System::Text::StringBuilder*  pchOriginalPath, uint32_t  unOriginalPathLen, ByRef<::OVR::OpenVR::EVRRenderModelError>  peError, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRRenderModelError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pchRenderModelName, pchOriginalPath, unOriginalPathLen, peError, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath::EndInvoke(ByRef<::OVR::OpenVR::EVRRenderModelError>  peError, ::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRRenderModelError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, peError, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27ea828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum::*)(::OVR::OpenVR::EVRRenderModelError)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27ea8ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum::*)(::OVR::OpenVR::EVRRenderModelError, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27ea900;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27ea984;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum* OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*>(object, method));
}
inline void OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::cordl_internals::intptr_t OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum::Invoke(::OVR::OpenVR::EVRRenderModelError  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRRenderModelError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(*this, ___internal_method, error);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRRenderModelError  error, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRRenderModelError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, error, callback, object);
}
inline ::cordl_internals::intptr_t OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(*this, ___internal_method, result);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_LoadRenderModel_Async(::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async* OVR::OpenVR::IVRRenderModels::__get_LoadRenderModel_Async()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*> OVR::OpenVR::IVRRenderModels::__get_LoadRenderModel_Async() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_FreeRenderModel(::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___FreeRenderModel* OVR::OpenVR::IVRRenderModels::__get_FreeRenderModel()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*> OVR::OpenVR::IVRRenderModels::__get_FreeRenderModel() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_LoadTexture_Async(::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async* OVR::OpenVR::IVRRenderModels::__get_LoadTexture_Async()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*> OVR::OpenVR::IVRRenderModels::__get_LoadTexture_Async() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_FreeTexture(::OVR::OpenVR::__IVRRenderModels___FreeTexture*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___FreeTexture*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___FreeTexture*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___FreeTexture* OVR::OpenVR::IVRRenderModels::__get_FreeTexture()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___FreeTexture*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___FreeTexture*> OVR::OpenVR::IVRRenderModels::__get_FreeTexture() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___FreeTexture*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_LoadTextureD3D11_Async(::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async* OVR::OpenVR::IVRRenderModels::__get_LoadTextureD3D11_Async()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*> OVR::OpenVR::IVRRenderModels::__get_LoadTextureD3D11_Async() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_LoadIntoTextureD3D11_Async(::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async* OVR::OpenVR::IVRRenderModels::__get_LoadIntoTextureD3D11_Async()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*> OVR::OpenVR::IVRRenderModels::__get_LoadIntoTextureD3D11_Async() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_FreeTextureD3D11(::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11* OVR::OpenVR::IVRRenderModels::__get_FreeTextureD3D11()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*> OVR::OpenVR::IVRRenderModels::__get_FreeTextureD3D11() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_GetRenderModelName(::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___GetRenderModelName* OVR::OpenVR::IVRRenderModels::__get_GetRenderModelName()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*> OVR::OpenVR::IVRRenderModels::__get_GetRenderModelName() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_GetRenderModelCount(::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount* OVR::OpenVR::IVRRenderModels::__get_GetRenderModelCount()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*> OVR::OpenVR::IVRRenderModels::__get_GetRenderModelCount() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_GetComponentCount(::OVR::OpenVR::__IVRRenderModels___GetComponentCount*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentCount*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___GetComponentCount*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___GetComponentCount* OVR::OpenVR::IVRRenderModels::__get_GetComponentCount()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentCount*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___GetComponentCount*> OVR::OpenVR::IVRRenderModels::__get_GetComponentCount() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentCount*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_GetComponentName(::OVR::OpenVR::__IVRRenderModels___GetComponentName*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentName*, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___GetComponentName*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___GetComponentName* OVR::OpenVR::IVRRenderModels::__get_GetComponentName()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentName*, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___GetComponentName*> OVR::OpenVR::IVRRenderModels::__get_GetComponentName() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentName*, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_GetComponentButtonMask(::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask* OVR::OpenVR::IVRRenderModels::__get_GetComponentButtonMask()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*> OVR::OpenVR::IVRRenderModels::__get_GetComponentButtonMask() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_GetComponentRenderModelName(::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName* OVR::OpenVR::IVRRenderModels::__get_GetComponentRenderModelName()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*> OVR::OpenVR::IVRRenderModels::__get_GetComponentRenderModelName() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_GetComponentStateForDevicePath(::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath* OVR::OpenVR::IVRRenderModels::__get_GetComponentStateForDevicePath()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*> OVR::OpenVR::IVRRenderModels::__get_GetComponentStateForDevicePath() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_GetComponentState(::OVR::OpenVR::__IVRRenderModels___GetComponentState*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentState*, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___GetComponentState*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___GetComponentState* OVR::OpenVR::IVRRenderModels::__get_GetComponentState()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentState*, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___GetComponentState*> OVR::OpenVR::IVRRenderModels::__get_GetComponentState() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetComponentState*, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_RenderModelHasComponent(::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent* OVR::OpenVR::IVRRenderModels::__get_RenderModelHasComponent()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*> OVR::OpenVR::IVRRenderModels::__get_RenderModelHasComponent() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_GetRenderModelThumbnailURL(::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*, 0x80>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL* OVR::OpenVR::IVRRenderModels::__get_GetRenderModelThumbnailURL()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*, 0x80>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*> OVR::OpenVR::IVRRenderModels::__get_GetRenderModelThumbnailURL() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*, 0x80>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_GetRenderModelOriginalPath(::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath* OVR::OpenVR::IVRRenderModels::__get_GetRenderModelOriginalPath()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*> OVR::OpenVR::IVRRenderModels::__get_GetRenderModelOriginalPath() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRRenderModels::__set_GetRenderModelErrorNameFromEnum(::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*, 0x90>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*>(value));
}
constexpr ::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum* OVR::OpenVR::IVRRenderModels::__get_GetRenderModelErrorNameFromEnum()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*, 0x90>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*> OVR::OpenVR::IVRRenderModels::__get_GetRenderModelErrorNameFromEnum() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*, 0x90>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "LoadRenderModel_Async", ty: "::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "FreeRenderModel", ty: "::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "LoadTexture_Async", ty: "::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "FreeTexture", ty: "::OVR::OpenVR::__IVRRenderModels___FreeTexture*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "LoadTextureD3D11_Async", ty: "::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "LoadIntoTextureD3D11_Async", ty: "::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "FreeTextureD3D11", ty: "::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetRenderModelName", ty: "::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetRenderModelCount", ty: "::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetComponentCount", ty: "::OVR::OpenVR::__IVRRenderModels___GetComponentCount*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetComponentName", ty: "::OVR::OpenVR::__IVRRenderModels___GetComponentName*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetComponentButtonMask", ty: "::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetComponentRenderModelName", ty: "::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetComponentStateForDevicePath", ty: "::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetComponentState", ty: "::OVR::OpenVR::__IVRRenderModels___GetComponentState*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "RenderModelHasComponent", ty: "::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetRenderModelThumbnailURL", ty: "::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetRenderModelOriginalPath", ty: "::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetRenderModelErrorNameFromEnum", ty: "::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*", modifiers: "", def_value: Some("csnull") }]
constexpr ::OVR::OpenVR::IVRRenderModels::IVRRenderModels(::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*  LoadRenderModel_Async, ::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*  FreeRenderModel, ::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*  LoadTexture_Async, ::OVR::OpenVR::__IVRRenderModels___FreeTexture*  FreeTexture, ::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*  LoadTextureD3D11_Async, ::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*  LoadIntoTextureD3D11_Async, ::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*  FreeTextureD3D11, ::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*  GetRenderModelName, ::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*  GetRenderModelCount, ::OVR::OpenVR::__IVRRenderModels___GetComponentCount*  GetComponentCount, ::OVR::OpenVR::__IVRRenderModels___GetComponentName*  GetComponentName, ::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*  GetComponentButtonMask, ::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*  GetComponentRenderModelName, ::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*  GetComponentStateForDevicePath, ::OVR::OpenVR::__IVRRenderModels___GetComponentState*  GetComponentState, ::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*  RenderModelHasComponent, ::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*  GetRenderModelThumbnailURL, ::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*  GetRenderModelOriginalPath, ::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*  GetRenderModelErrorNameFromEnum) noexcept : ::bs_hook::ValueTypeWrapper<0x98>() {this->LoadRenderModel_Async = LoadRenderModel_Async;
this->FreeRenderModel = FreeRenderModel;
this->LoadTexture_Async = LoadTexture_Async;
this->FreeTexture = FreeTexture;
this->LoadTextureD3D11_Async = LoadTextureD3D11_Async;
this->LoadIntoTextureD3D11_Async = LoadIntoTextureD3D11_Async;
this->FreeTextureD3D11 = FreeTextureD3D11;
this->GetRenderModelName = GetRenderModelName;
this->GetRenderModelCount = GetRenderModelCount;
this->GetComponentCount = GetComponentCount;
this->GetComponentName = GetComponentName;
this->GetComponentButtonMask = GetComponentButtonMask;
this->GetComponentRenderModelName = GetComponentRenderModelName;
this->GetComponentStateForDevicePath = GetComponentStateForDevicePath;
this->GetComponentState = GetComponentState;
this->RenderModelHasComponent = RenderModelHasComponent;
this->GetRenderModelThumbnailURL = GetRenderModelThumbnailURL;
this->GetRenderModelOriginalPath = GetRenderModelOriginalPath;
this->GetRenderModelErrorNameFromEnum = GetRenderModelErrorNameFromEnum;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
