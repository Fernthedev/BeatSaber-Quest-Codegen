#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroup_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroup_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererCullingOutput_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2ceef10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling::*)(::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchCullingContext)>(&::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling::Invoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2cef040;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling* UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*>(object, method));
}
inline void UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling::Invoke(::UnityEngine::Rendering::BatchRendererGroup*  rendererGroup, ::UnityEngine::Rendering::BatchCullingContext  cullingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchCullingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(*this, ___internal_method, rendererGroup, cullingContext);
}
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.InvokeOnPerformCulling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::BatchRendererGroup*, ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput>, ByRef<::UnityEngine::Rendering::LODParameters>)>(&::UnityEngine::Rendering::BatchRendererGroup::InvokeOnPerformCulling)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2ceecf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(),
                            "InvokeOnPerformCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::LODParameters>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Rendering::BatchRendererGroup::__set_m_GroupHandle(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& UnityEngine::Rendering::BatchRendererGroup::__get_m_GroupHandle()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this);
}
constexpr ::cordl_internals::intptr_t const& UnityEngine::Rendering::BatchRendererGroup::__get_m_GroupHandle() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this);
}
constexpr void UnityEngine::Rendering::BatchRendererGroup::__set_m_PerformCulling(::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*, 0x18>(this, std::forward<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*>(value));
}
constexpr ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling* UnityEngine::Rendering::BatchRendererGroup::__get_m_PerformCulling()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*> UnityEngine::Rendering::BatchRendererGroup::__get_m_PerformCulling() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*, 0x18>(this);
}
inline void UnityEngine::Rendering::BatchRendererGroup::InvokeOnPerformCulling(::UnityEngine::Rendering::BatchRendererGroup*  group, ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput>  context, ByRef<::UnityEngine::Rendering::LODParameters>  lodParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(),
                            "InvokeOnPerformCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::LODParameters>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, group, context, lodParameters);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
