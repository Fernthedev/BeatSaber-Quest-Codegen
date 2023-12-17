#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2cf6068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutput (::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod::*)(::UnityEngine::Playables::PlayableGraph, ::StringW)>(&::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2cf612c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod* UnityEngine::Playables::__PlayableBinding__CreateOutputMethod::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*>(object, method));
}
inline void UnityEngine::Playables::__PlayableBinding__CreateOutputMethod::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::UnityEngine::Playables::PlayableOutput UnityEngine::Playables::__PlayableBinding__CreateOutputMethod::Invoke(::UnityEngine::Playables::PlayableGraph  graph, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutput, false>(*this, ___internal_method, graph, name);
}
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBinding.get_streamName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Playables::PlayableBinding::*)()>(&::UnityEngine::Playables::PlayableBinding::get_streamName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf5eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get(),
                            "get_streamName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBinding.get_sourceObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (::UnityEngine::Playables::PlayableBinding::*)()>(&::UnityEngine::Playables::PlayableBinding::get_sourceObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf5ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get(),
                            "get_sourceObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBinding.CreateOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutput (::UnityEngine::Playables::PlayableBinding::*)(::UnityEngine::Playables::PlayableGraph)>(&::UnityEngine::Playables::PlayableBinding::CreateOutput)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2cf5efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get(),
                            "CreateOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableBinding.CreateInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableBinding (*)(::StringW, ::UnityEngine::Object*, ::System::Type*, ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*)>(&::UnityEngine::Playables::PlayableBinding::CreateInternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cf5fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get(),
                            "CreateInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Playables::PlayableBinding::__set_m_StreamName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::Playables::PlayableBinding::__get_m_StreamName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::Playables::PlayableBinding::__get_m_StreamName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Playables::PlayableBinding::__set_m_SourceObject(::UnityEngine::Object*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Object*>(value));
}
constexpr ::UnityEngine::Object* UnityEngine::Playables::PlayableBinding::__get_m_SourceObject()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> UnityEngine::Playables::PlayableBinding::__get_m_SourceObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Playables::PlayableBinding::__set_m_SourceBindingType(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* UnityEngine::Playables::PlayableBinding::__get_m_SourceBindingType()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> UnityEngine::Playables::PlayableBinding::__get_m_SourceBindingType() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Playables::PlayableBinding::__set_m_CreateOutputMethod(::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*>(value));
}
constexpr ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod* UnityEngine::Playables::PlayableBinding::__get_m_CreateOutputMethod()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*> UnityEngine::Playables::PlayableBinding::__get_m_CreateOutputMethod() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void UnityEngine::Playables::PlayableBinding::setStaticF_None(::ArrayW<::UnityEngine::Playables::PlayableBinding,::Array<::UnityEngine::Playables::PlayableBinding>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Playables::PlayableBinding,::Array<::UnityEngine::Playables::PlayableBinding>*>, "None", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get>(std::forward<::ArrayW<::UnityEngine::Playables::PlayableBinding,::Array<::UnityEngine::Playables::PlayableBinding>*>>(value));
}
inline ::ArrayW<::UnityEngine::Playables::PlayableBinding,::Array<::UnityEngine::Playables::PlayableBinding>*> UnityEngine::Playables::PlayableBinding::getStaticF_None()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Playables::PlayableBinding,::Array<::UnityEngine::Playables::PlayableBinding>*>, "None", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get>();
}
inline void UnityEngine::Playables::PlayableBinding::setStaticF_DefaultDuration(double_t  value)  {
::cordl_internals::setStaticField<double_t, "DefaultDuration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get>(std::forward<double_t>(value));
}
inline double_t UnityEngine::Playables::PlayableBinding::getStaticF_DefaultDuration()  {
return ::cordl_internals::getStaticField<double_t, "DefaultDuration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get>();
}
inline ::StringW UnityEngine::Playables::PlayableBinding::get_streamName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get(),
                            "get_streamName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::UnityEngine::Object* UnityEngine::Playables::PlayableBinding::get_sourceObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get(),
                            "get_sourceObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object*, false>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableOutput UnityEngine::Playables::PlayableBinding::CreateOutput(::UnityEngine::Playables::PlayableGraph  graph)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get(),
                            "CreateOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutput, false>(*this, ___internal_method, graph);
}
inline ::UnityEngine::Playables::PlayableBinding UnityEngine::Playables::PlayableBinding::CreateInternal(::StringW  name, ::UnityEngine::Object*  sourceObject, ::System::Type*  sourceType, ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*  createFunction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableBinding>::get(),
                            "CreateInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableBinding, false>(nullptr, ___internal_method, name, sourceObject, sourceType, createFunction);
}
// Ctor Parameters [CppParam { name: "m_StreamName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_SourceObject", ty: "::UnityEngine::Object*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_SourceBindingType", ty: "::System::Type*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_CreateOutputMethod", ty: "::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::Playables::PlayableBinding::PlayableBinding(::StringW  m_StreamName, ::UnityEngine::Object*  m_SourceObject, ::System::Type*  m_SourceBindingType, ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*  m_CreateOutputMethod) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->m_StreamName = m_StreamName;
this->m_SourceObject = m_SourceObject;
this->m_SourceBindingType = m_SourceBindingType;
this->m_CreateOutputMethod = m_CreateOutputMethod;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
