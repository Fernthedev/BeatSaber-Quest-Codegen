#pragma once
#include "System/IO/zzzz__TextReader_impl.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__StreamReader_NullStreamReader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::IO::__StreamReader___ReadLineAsyncInternal_d__61.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__StreamReader___ReadLineAsyncInternal_d__61::*)()>(&::System::IO::__StreamReader___ReadLineAsyncInternal_d__61::MoveNext)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x2502e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__StreamReader___ReadLineAsyncInternal_d__61>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::__StreamReader___ReadLineAsyncInternal_d__61.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__StreamReader___ReadLineAsyncInternal_d__61::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::IO::__StreamReader___ReadLineAsyncInternal_d__61::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25033bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__StreamReader___ReadLineAsyncInternal_d__61>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::IO::__StreamReader___ReadLineAsyncInternal_d__61::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>& System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> const& System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__set___4__this(::System::IO::StreamReader*  value)  {
::cordl_internals::setInstanceField<::System::IO::StreamReader*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::IO::StreamReader*>(value));
}
constexpr ::System::IO::StreamReader* System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__get___4__this()  {
return ::cordl_internals::getInstanceField<::System::IO::StreamReader*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::IO::StreamReader*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__set__sb_5__2(::System::Text::StringBuilder*  value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Text::StringBuilder*>(value));
}
constexpr ::System::Text::StringBuilder* System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__get__sb_5__2()  {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__get__sb_5__2() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>& System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> const& System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__set__s_5__3(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__get__s_5__3()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__get__s_5__3() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::IO::__StreamReader___ReadLineAsyncInternal_d__61::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__StreamReader___ReadLineAsyncInternal_d__61>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::__StreamReader___ReadLineAsyncInternal_d__61::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__StreamReader___ReadLineAsyncInternal_d__61>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::IO::StreamReader*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_sb_5__2", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_s_5__3", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::System::IO::__StreamReader___ReadLineAsyncInternal_d__61::__StreamReader___ReadLineAsyncInternal_d__61(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::System::IO::StreamReader*  __4__this, ::System::Text::StringBuilder*  _sb_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__1, ::StringW  _s_5__3) noexcept : ::bs_hook::ValueTypeWrapper<0x48>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_sb_5__2 = _sb_5__2;
this->__u__1 = __u__1;
this->_s_5__3 = _s_5__3;
}
//  Writing Method size for method: ::System::IO::__StreamReader___ReadBufferAsync_d__69.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__StreamReader___ReadBufferAsync_d__69::*)()>(&::System::IO::__StreamReader___ReadBufferAsync_d__69::MoveNext)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x2503414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__StreamReader___ReadBufferAsync_d__69>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::__StreamReader___ReadBufferAsync_d__69.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__StreamReader___ReadBufferAsync_d__69::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::IO::__StreamReader___ReadBufferAsync_d__69::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2503a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__StreamReader___ReadBufferAsync_d__69>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::IO::__StreamReader___ReadBufferAsync_d__69::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void System::IO::__StreamReader___ReadBufferAsync_d__69::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::__StreamReader___ReadBufferAsync_d__69::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::IO::__StreamReader___ReadBufferAsync_d__69::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__StreamReader___ReadBufferAsync_d__69::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>& System::IO::__StreamReader___ReadBufferAsync_d__69::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> const& System::IO::__StreamReader___ReadBufferAsync_d__69::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__StreamReader___ReadBufferAsync_d__69::__set___4__this(::System::IO::StreamReader*  value)  {
::cordl_internals::setInstanceField<::System::IO::StreamReader*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::IO::StreamReader*>(value));
}
constexpr ::System::IO::StreamReader* System::IO::__StreamReader___ReadBufferAsync_d__69::__get___4__this()  {
return ::cordl_internals::getInstanceField<::System::IO::StreamReader*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> System::IO::__StreamReader___ReadBufferAsync_d__69::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::IO::StreamReader*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__StreamReader___ReadBufferAsync_d__69::__set__tmpByteBuffer_5__2(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::IO::__StreamReader___ReadBufferAsync_d__69::__get__tmpByteBuffer_5__2()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::IO::__StreamReader___ReadBufferAsync_d__69::__get__tmpByteBuffer_5__2() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__StreamReader___ReadBufferAsync_d__69::__set__tmpStream_5__3(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* System::IO::__StreamReader___ReadBufferAsync_d__69::__get__tmpStream_5__3()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> System::IO::__StreamReader___ReadBufferAsync_d__69::__get__tmpStream_5__3() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__StreamReader___ReadBufferAsync_d__69::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>& System::IO::__StreamReader___ReadBufferAsync_d__69::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> const& System::IO::__StreamReader___ReadBufferAsync_d__69::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::IO::__StreamReader___ReadBufferAsync_d__69::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__StreamReader___ReadBufferAsync_d__69>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::__StreamReader___ReadBufferAsync_d__69::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__StreamReader___ReadBufferAsync_d__69>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::IO::StreamReader*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_tmpByteBuffer_5__2", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_tmpStream_5__3", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::__StreamReader___ReadBufferAsync_d__69::__StreamReader___ReadBufferAsync_d__69(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder, ::System::IO::StreamReader*  __4__this, ::ArrayW<uint8_t,::Array<uint8_t>*>  _tmpByteBuffer_5__2, ::System::IO::Stream*  _tmpStream_5__3, ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x48>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_tmpByteBuffer_5__2 = _tmpByteBuffer_5__2;
this->_tmpStream_5__3 = _tmpStream_5__3;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::System::IO::StreamReader.CheckAsyncTaskInProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::CheckAsyncTaskInProgress)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2500bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "CheckAsyncTaskInProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ThrowAsyncIOInProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::IO::StreamReader::ThrowAsyncIOInProgress)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2500c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "ThrowAsyncIOInProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2500ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)(::System::IO::Stream*)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2500d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)(::System::IO::Stream*, bool)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2500da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)(::System::IO::Stream*, ::System::Text::Encoding*)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2501008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)(::System::IO::Stream*, ::System::Text::Encoding*, bool)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2501018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)(::System::IO::Stream*, ::System::Text::Encoding*, bool, int32_t, bool)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x2500de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)(::StringW)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2501150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)(::StringW, bool)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2501188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)(::StringW, ::System::Text::Encoding*)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2501410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)(::StringW, ::System::Text::Encoding*, bool)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x250141c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)(::StringW, ::System::Text::Encoding*, bool, int32_t)>(&::System::IO::StreamReader::_ctor)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x25011c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)(::System::IO::Stream*, ::System::Text::Encoding*, bool, int32_t, bool)>(&::System::IO::StreamReader::Init)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2501028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)(::System::IO::Stream*)>(&::System::IO::StreamReader::Init)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2501428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2501438;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)(bool)>(&::System::IO::StreamReader::Dispose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2501448;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.get_CurrentEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::get_CurrentEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2501528;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.get_BaseStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::get_BaseStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2501530;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.get_LeaveOpen
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::get_LeaveOpen)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2501518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "get_LeaveOpen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.get_EndOfStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::get_EndOfStream)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2501538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "get_EndOfStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.Peek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::Peek)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x25015d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::Read)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x250169c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::StreamReader::*)(::ArrayW<char16_t,::Array<char16_t>*>, int32_t, int32_t)>(&::System::IO::StreamReader::Read)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2501764;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ReadSpan
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::StreamReader::*)(::System::Span_1<char16_t>)>(&::System::IO::StreamReader::ReadSpan)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x2501924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "ReadSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ReadToEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::ReadToEnd)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2501e9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.CompressBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)(int32_t)>(&::System::IO::StreamReader::CompressBuffer)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2501fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "CompressBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.DetectEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::DetectEncoding)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2501ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "DetectEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.IsPreamble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::IsPreamble)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x25022b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "IsPreamble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ReadBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::ReadBuffer)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x25023e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ReadBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::StreamReader::*)(::System::Span_1<char16_t>, ByRef<bool>)>(&::System::IO::StreamReader::ReadBuffer)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2501b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "ReadBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ReadLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::ReadLine)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2502550;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ReadLineAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::ReadLineAsync)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x25027b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ReadLineAsyncInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::ReadLineAsyncInternal)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2502aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "ReadLineAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.ReadBufferAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::ReadBufferAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2502b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "ReadBufferAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamReader.DataAvailable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::StreamReader::*)()>(&::System::IO::StreamReader::DataAvailable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2502c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "DataAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void System::IO::StreamReader::setStaticF_Null(::System::IO::StreamReader*  value)  {
::cordl_internals::setStaticField<::System::IO::StreamReader*, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get>(std::forward<::System::IO::StreamReader*>(value));
}
inline ::System::IO::StreamReader* System::IO::StreamReader::getStaticF_Null()  {
return ::cordl_internals::getStaticField<::System::IO::StreamReader*, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get>();
}
constexpr void System::IO::StreamReader::__set__stream(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x18>(this, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* System::IO::StreamReader::__get__stream()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> System::IO::StreamReader::__get__stream() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x18>(this);
}
constexpr void System::IO::StreamReader::__set__encoding(::System::Text::Encoding*  value)  {
::cordl_internals::setInstanceField<::System::Text::Encoding*, 0x20>(this, std::forward<::System::Text::Encoding*>(value));
}
constexpr ::System::Text::Encoding* System::IO::StreamReader::__get__encoding()  {
return ::cordl_internals::getInstanceField<::System::Text::Encoding*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> System::IO::StreamReader::__get__encoding() const {
return ::cordl_internals::getInstanceField<::System::Text::Encoding*, 0x20>(this);
}
constexpr void System::IO::StreamReader::__set__decoder(::System::Text::Decoder*  value)  {
::cordl_internals::setInstanceField<::System::Text::Decoder*, 0x28>(this, std::forward<::System::Text::Decoder*>(value));
}
constexpr ::System::Text::Decoder* System::IO::StreamReader::__get__decoder()  {
return ::cordl_internals::getInstanceField<::System::Text::Decoder*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Decoder*> System::IO::StreamReader::__get__decoder() const {
return ::cordl_internals::getInstanceField<::System::Text::Decoder*, 0x28>(this);
}
constexpr void System::IO::StreamReader::__set__byteBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x30>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::IO::StreamReader::__get__byteBuffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x30>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::IO::StreamReader::__get__byteBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x30>(this);
}
constexpr void System::IO::StreamReader::__set__charBuffer(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x38>(this, std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*>& System::IO::StreamReader::__get__charBuffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x38>(this);
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& System::IO::StreamReader::__get__charBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x38>(this);
}
constexpr void System::IO::StreamReader::__set__charPos(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::StreamReader::__get__charPos()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& System::IO::StreamReader::__get__charPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void System::IO::StreamReader::__set__charLen(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::StreamReader::__get__charLen()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr int32_t const& System::IO::StreamReader::__get__charLen() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr void System::IO::StreamReader::__set__byteLen(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::StreamReader::__get__byteLen()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& System::IO::StreamReader::__get__byteLen() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr void System::IO::StreamReader::__set__bytePos(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::StreamReader::__get__bytePos()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this);
}
constexpr int32_t const& System::IO::StreamReader::__get__bytePos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this);
}
constexpr void System::IO::StreamReader::__set__maxCharsPerBuffer(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::StreamReader::__get__maxCharsPerBuffer()  {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr int32_t const& System::IO::StreamReader::__get__maxCharsPerBuffer() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr void System::IO::StreamReader::__set__detectEncoding(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this, std::forward<bool>(value));
}
constexpr bool& System::IO::StreamReader::__get__detectEncoding()  {
return ::cordl_internals::getInstanceField<bool, 0x54>(this);
}
constexpr bool const& System::IO::StreamReader::__get__detectEncoding() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this);
}
constexpr void System::IO::StreamReader::__set__checkPreamble(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x55>(this, std::forward<bool>(value));
}
constexpr bool& System::IO::StreamReader::__get__checkPreamble()  {
return ::cordl_internals::getInstanceField<bool, 0x55>(this);
}
constexpr bool const& System::IO::StreamReader::__get__checkPreamble() const {
return ::cordl_internals::getInstanceField<bool, 0x55>(this);
}
constexpr void System::IO::StreamReader::__set__isBlocked(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x56>(this, std::forward<bool>(value));
}
constexpr bool& System::IO::StreamReader::__get__isBlocked()  {
return ::cordl_internals::getInstanceField<bool, 0x56>(this);
}
constexpr bool const& System::IO::StreamReader::__get__isBlocked() const {
return ::cordl_internals::getInstanceField<bool, 0x56>(this);
}
constexpr void System::IO::StreamReader::__set__closable(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x57>(this, std::forward<bool>(value));
}
constexpr bool& System::IO::StreamReader::__get__closable()  {
return ::cordl_internals::getInstanceField<bool, 0x57>(this);
}
constexpr bool const& System::IO::StreamReader::__get__closable() const {
return ::cordl_internals::getInstanceField<bool, 0x57>(this);
}
constexpr void System::IO::StreamReader::__set__asyncReadTask(::System::Threading::Tasks::Task*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task*, 0x58>(this, std::forward<::System::Threading::Tasks::Task*>(value));
}
constexpr ::System::Threading::Tasks::Task* System::IO::StreamReader::__get__asyncReadTask()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> System::IO::StreamReader::__get__asyncReadTask() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x58>(this);
}
inline void System::IO::StreamReader::CheckAsyncTaskInProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "CheckAsyncTaskInProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::StreamReader::ThrowAsyncIOInProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "ThrowAsyncIOInProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::StreamReader*>());
}
inline void System::IO::StreamReader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::System::IO::Stream*  stream)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::StreamReader*>(stream));
}
inline void System::IO::StreamReader::_ctor(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stream);
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::System::IO::Stream*  stream, bool  detectEncodingFromByteOrderMarks)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::StreamReader*>(stream, detectEncodingFromByteOrderMarks));
}
inline void System::IO::StreamReader::_ctor(::System::IO::Stream*  stream, bool  detectEncodingFromByteOrderMarks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stream, detectEncodingFromByteOrderMarks);
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::StreamReader*>(stream, encoding));
}
inline void System::IO::StreamReader::_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stream, encoding);
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::StreamReader*>(stream, encoding, detectEncodingFromByteOrderMarks));
}
inline void System::IO::StreamReader::_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stream, encoding, detectEncodingFromByteOrderMarks);
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks, int32_t  bufferSize, bool  leaveOpen)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::StreamReader*>(stream, encoding, detectEncodingFromByteOrderMarks, bufferSize, leaveOpen));
}
inline void System::IO::StreamReader::_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks, int32_t  bufferSize, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stream, encoding, detectEncodingFromByteOrderMarks, bufferSize, leaveOpen);
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::StringW  path)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::StreamReader*>(path));
}
inline void System::IO::StreamReader::_ctor(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, path);
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::StringW  path, bool  detectEncodingFromByteOrderMarks)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::StreamReader*>(path, detectEncodingFromByteOrderMarks));
}
inline void System::IO::StreamReader::_ctor(::StringW  path, bool  detectEncodingFromByteOrderMarks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, path, detectEncodingFromByteOrderMarks);
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::StringW  path, ::System::Text::Encoding*  encoding)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::StreamReader*>(path, encoding));
}
inline void System::IO::StreamReader::_ctor(::StringW  path, ::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, path, encoding);
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::StringW  path, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::StreamReader*>(path, encoding, detectEncodingFromByteOrderMarks));
}
inline void System::IO::StreamReader::_ctor(::StringW  path, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, path, encoding, detectEncodingFromByteOrderMarks);
}
inline ::System::IO::StreamReader* System::IO::StreamReader::New_ctor(::StringW  path, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks, int32_t  bufferSize)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::StreamReader*>(path, encoding, detectEncodingFromByteOrderMarks, bufferSize));
}
inline void System::IO::StreamReader::_ctor(::StringW  path, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, path, encoding, detectEncodingFromByteOrderMarks, bufferSize);
}
inline void System::IO::StreamReader::Init(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks, int32_t  bufferSize, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stream, encoding, detectEncodingFromByteOrderMarks, bufferSize, leaveOpen);
}
inline void System::IO::StreamReader::Init(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stream);
}
inline void System::IO::StreamReader::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::StreamReader::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
inline ::System::Text::Encoding* System::IO::StreamReader::get_CurrentEncoding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "get_CurrentEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(*this, ___internal_method);
}
inline ::System::IO::Stream* System::IO::StreamReader::get_BaseStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "get_BaseStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(*this, ___internal_method);
}
inline bool System::IO::StreamReader::get_LeaveOpen()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "get_LeaveOpen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::IO::StreamReader::get_EndOfStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "get_EndOfStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t System::IO::StreamReader::Peek()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "Peek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::IO::StreamReader::Read()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::IO::StreamReader::Read(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, buffer, index, count);
}
inline int32_t System::IO::StreamReader::ReadSpan(::System::Span_1<char16_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "ReadSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, buffer);
}
inline ::StringW System::IO::StreamReader::ReadToEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "ReadToEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::IO::StreamReader::CompressBuffer(int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "CompressBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, n);
}
inline void System::IO::StreamReader::DetectEncoding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "DetectEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::IO::StreamReader::IsPreamble()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "IsPreamble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t System::IO::StreamReader::ReadBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "ReadBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::IO::StreamReader::ReadBuffer(::System::Span_1<char16_t>  userBuffer, ByRef<bool>  readToUserBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "ReadBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, userBuffer, readToUserBuffer);
}
inline ::StringW System::IO::StreamReader::ReadLine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "ReadLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* System::IO::StreamReader::ReadLineAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "ReadLineAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* System::IO::StreamReader::ReadLineAsyncInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "ReadLineAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::StreamReader::ReadBufferAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "ReadBufferAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(*this, ___internal_method);
}
inline bool System::IO::StreamReader::DataAvailable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamReader*>::get(),
                            "DataAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
