#pragma once
#include "System/Net/zzzz__WebReadStream_impl.hpp"
#include "System/Net/zzzz__ContentDecodeStream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Net/zzzz__ContentDecodeStream_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
constexpr void System::Net::__ContentDecodeStream__Mode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::__ContentDecodeStream__Mode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::__ContentDecodeStream__Mode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__ContentDecodeStream__Mode::__ContentDecodeStream__Mode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::__ContentDecodeStream__Mode  System::Net::__ContentDecodeStream__Mode::GZip{static_cast<int32_t>(0x0)};
constexpr ::System::Net::__ContentDecodeStream__Mode  System::Net::__ContentDecodeStream__Mode::Deflate{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::System::Net::ContentDecodeStream.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ContentDecodeStream* (*)(::System::Net::WebOperation*, ::System::IO::Stream*, ::System::Net::__ContentDecodeStream__Mode)>(&::System::Net::ContentDecodeStream::Create)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x29bd31c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__ContentDecodeStream__Mode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContentDecodeStream.get_OriginalInnerStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::ContentDecodeStream::*)()>(&::System::Net::ContentDecodeStream::get_OriginalInnerStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29bd430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(),
                            "get_OriginalInnerStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContentDecodeStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ContentDecodeStream::*)(::System::Net::WebOperation*, ::System::IO::Stream*, ::System::IO::Stream*)>(&::System::Net::ContentDecodeStream::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29bd408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContentDecodeStream.ProcessReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::Net::ContentDecodeStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::ContentDecodeStream::ProcessReadAsync)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29bd438;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContentDecodeStream.FinishReading
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Net::ContentDecodeStream::*)(::System::Threading::CancellationToken)>(&::System::Net::ContentDecodeStream::FinishReading)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x29bd45c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::ContentDecodeStream::__set__OriginalInnerStream_k__BackingField(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x40>(this, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* System::Net::ContentDecodeStream::__get__OriginalInnerStream_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> System::Net::ContentDecodeStream::__get__OriginalInnerStream_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x40>(this);
}
inline ::System::Net::ContentDecodeStream* System::Net::ContentDecodeStream::Create(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream, ::System::Net::__ContentDecodeStream__Mode  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__ContentDecodeStream__Mode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ContentDecodeStream*, false>(nullptr, ___internal_method, operation, innerStream, mode);
}
inline ::System::IO::Stream* System::Net::ContentDecodeStream::get_OriginalInnerStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(),
                            "get_OriginalInnerStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(*this, ___internal_method);
}
inline ::System::Net::ContentDecodeStream* System::Net::ContentDecodeStream::New_ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  decodeStream, ::System::IO::Stream*  originalInnerStream)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::ContentDecodeStream*>(operation, decodeStream, originalInnerStream));
}
inline void System::Net::ContentDecodeStream::_ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  decodeStream, ::System::IO::Stream*  originalInnerStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, operation, decodeStream, originalInnerStream);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::ContentDecodeStream::ProcessReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(),
                            "ProcessReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(*this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::ContentDecodeStream::FinishReading(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ContentDecodeStream*>::get(),
                            "FinishReading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, cancellationToken);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
