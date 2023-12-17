#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SafeSerializationEventArgs_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationEventArgs::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SafeSerializationEventArgs::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x24bcd94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationEventArgs.get_SerializedStates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Object*>* (::System::Runtime::Serialization::SafeSerializationEventArgs::*)()>(&::System::Runtime::Serialization::SafeSerializationEventArgs::get_SerializedStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24bce4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationEventArgs*>::get(),
                            "get_SerializedStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::SafeSerializationEventArgs::__set_m_streamingContext(::System::Runtime::Serialization::StreamingContext  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::StreamingContext, 0x10>(this, std::forward<::System::Runtime::Serialization::StreamingContext>(value));
}
constexpr ::System::Runtime::Serialization::StreamingContext& System::Runtime::Serialization::SafeSerializationEventArgs::__get_m_streamingContext()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::StreamingContext, 0x10>(this);
}
constexpr ::System::Runtime::Serialization::StreamingContext const& System::Runtime::Serialization::SafeSerializationEventArgs::__get_m_streamingContext() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::StreamingContext, 0x10>(this);
}
constexpr void System::Runtime::Serialization::SafeSerializationEventArgs::__set_m_serializedStates(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Object*>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::System::Object*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* System::Runtime::Serialization::SafeSerializationEventArgs::__get_m_serializedStates()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Object*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> System::Runtime::Serialization::SafeSerializationEventArgs::__get_m_serializedStates() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Object*>*, 0x20>(this);
}
inline ::System::Runtime::Serialization::SafeSerializationEventArgs* System::Runtime::Serialization::SafeSerializationEventArgs::New_ctor(::System::Runtime::Serialization::StreamingContext  streamingContext)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::SafeSerializationEventArgs*>(streamingContext));
}
inline void System::Runtime::Serialization::SafeSerializationEventArgs::_ctor(::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, streamingContext);
}
inline ::System::Collections::Generic::IList_1<::System::Object*>* System::Runtime::Serialization::SafeSerializationEventArgs::get_SerializedStates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationEventArgs*>::get(),
                            "get_SerializedStates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Object*>*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
