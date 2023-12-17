#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__AsyncRequest_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::AsyncRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::AsyncRequest::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(&::System::Runtime::Remoting::Channels::AsyncRequest::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24a3d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::AsyncRequest*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::Channels::AsyncRequest::__set_ReplySink(::System::Runtime::Remoting::Messaging::IMessageSink*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::IMessageSink*, 0x10>(this, std::forward<::System::Runtime::Remoting::Messaging::IMessageSink*>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Channels::AsyncRequest::__get_ReplySink()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::IMessageSink*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> System::Runtime::Remoting::Channels::AsyncRequest::__get_ReplySink() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::IMessageSink*, 0x10>(this);
}
constexpr void System::Runtime::Remoting::Channels::AsyncRequest::__set_MsgRequest(::System::Runtime::Remoting::Messaging::IMessage*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::IMessage*, 0x18>(this, std::forward<::System::Runtime::Remoting::Messaging::IMessage*>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Channels::AsyncRequest::__get_MsgRequest()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::IMessage*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessage*> System::Runtime::Remoting::Channels::AsyncRequest::__get_MsgRequest() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::IMessage*, 0x18>(this);
}
inline ::System::Runtime::Remoting::Channels::AsyncRequest* System::Runtime::Remoting::Channels::AsyncRequest::New_ctor(::System::Runtime::Remoting::Messaging::IMessage*  msgRequest, ::System::Runtime::Remoting::Messaging::IMessageSink*  replySink)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Channels::AsyncRequest*>(msgRequest, replySink));
}
inline void System::Runtime::Remoting::Channels::AsyncRequest::_ctor(::System::Runtime::Remoting::Messaging::IMessage*  msgRequest, ::System::Runtime::Remoting::Messaging::IMessageSink*  replySink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::AsyncRequest*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, msgRequest, replySink);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
