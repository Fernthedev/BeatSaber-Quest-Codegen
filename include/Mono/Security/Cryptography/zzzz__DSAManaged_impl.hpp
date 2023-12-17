#pragma once
#include "System/Security/Cryptography/zzzz__DSA_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__DSAManaged_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/Security/Cryptography/zzzz__DSAParameters_def.hpp"
#include "Mono/Security/Cryptography/zzzz__DSAManaged_def.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x24283a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler::*)(::System::Object*, ::System::EventArgs*)>(&::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24284d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler* Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>(object, method));
}
inline void Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler::Invoke(::System::Object*  sender, ::System::EventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sender, e);
}
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(int32_t)>(&::Mono::Security::Cryptography::DSAManaged::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2426820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)()>(&::Mono::Security::Cryptography::DSAManaged::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2426900;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)()>(&::Mono::Security::Cryptography::DSAManaged::Generate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x24269a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.GenerateKeyPair
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)()>(&::Mono::Security::Cryptography::DSAManaged::GenerateKeyPair)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2426f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "GenerateKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t)>(&::Mono::Security::Cryptography::DSAManaged::add)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2427130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.GenerateParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(int32_t)>(&::Mono::Security::Cryptography::DSAManaged::GenerateParams)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x24269ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "GenerateParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.get_Random
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RandomNumberGenerator* (::Mono::Security::Cryptography::DSAManaged::*)()>(&::Mono::Security::Cryptography::DSAManaged::get_Random)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24271d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "get_Random",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.get_KeySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::Cryptography::DSAManaged::*)()>(&::Mono::Security::Cryptography::DSAManaged::get_KeySize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2427508;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.get_PublicOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Cryptography::DSAManaged::*)()>(&::Mono::Security::Cryptography::DSAManaged::get_PublicOnly)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2427534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "get_PublicOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.NormalizeArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Mono::Security::Cryptography::DSAManaged::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Mono::Security::Cryptography::DSAManaged::NormalizeArray)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x24275a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "NormalizeArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.ExportParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DSAParameters (::Mono::Security::Cryptography::DSAManaged::*)(bool)>(&::Mono::Security::Cryptography::DSAManaged::ExportParameters)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x242764c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.ImportParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(::System::Security::Cryptography::DSAParameters)>(&::Mono::Security::Cryptography::DSAManaged::ImportParameters)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2427930;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Cryptography::DSAManaged::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Mono::Security::Cryptography::DSAManaged::VerifySignature)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x2427bd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(bool)>(&::Mono::Security::Cryptography::DSAManaged::Dispose)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2428098;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.add_KeyGenerated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*)>(&::Mono::Security::Cryptography::DSAManaged::add_KeyGenerated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2428268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "add_KeyGenerated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.remove_KeyGenerated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*)>(&::Mono::Security::Cryptography::DSAManaged::remove_KeyGenerated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2428304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "remove_KeyGenerated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Security::Cryptography::DSAManaged::__set_keypairGenerated(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& Mono::Security::Cryptography::DSAManaged::__get_keypairGenerated()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& Mono::Security::Cryptography::DSAManaged::__get_keypairGenerated() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_m_disposed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this, std::forward<bool>(value));
}
constexpr bool& Mono::Security::Cryptography::DSAManaged::__get_m_disposed()  {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr bool const& Mono::Security::Cryptography::DSAManaged::__get_m_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_p(::Mono::Math::BigInteger*  value)  {
::cordl_internals::setInstanceField<::Mono::Math::BigInteger*, 0x28>(this, std::forward<::Mono::Math::BigInteger*>(value));
}
constexpr ::Mono::Math::BigInteger* Mono::Security::Cryptography::DSAManaged::__get_p()  {
return ::cordl_internals::getInstanceField<::Mono::Math::BigInteger*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> Mono::Security::Cryptography::DSAManaged::__get_p() const {
return ::cordl_internals::getInstanceField<::Mono::Math::BigInteger*, 0x28>(this);
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_q(::Mono::Math::BigInteger*  value)  {
::cordl_internals::setInstanceField<::Mono::Math::BigInteger*, 0x30>(this, std::forward<::Mono::Math::BigInteger*>(value));
}
constexpr ::Mono::Math::BigInteger* Mono::Security::Cryptography::DSAManaged::__get_q()  {
return ::cordl_internals::getInstanceField<::Mono::Math::BigInteger*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> Mono::Security::Cryptography::DSAManaged::__get_q() const {
return ::cordl_internals::getInstanceField<::Mono::Math::BigInteger*, 0x30>(this);
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_g(::Mono::Math::BigInteger*  value)  {
::cordl_internals::setInstanceField<::Mono::Math::BigInteger*, 0x38>(this, std::forward<::Mono::Math::BigInteger*>(value));
}
constexpr ::Mono::Math::BigInteger* Mono::Security::Cryptography::DSAManaged::__get_g()  {
return ::cordl_internals::getInstanceField<::Mono::Math::BigInteger*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> Mono::Security::Cryptography::DSAManaged::__get_g() const {
return ::cordl_internals::getInstanceField<::Mono::Math::BigInteger*, 0x38>(this);
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_x(::Mono::Math::BigInteger*  value)  {
::cordl_internals::setInstanceField<::Mono::Math::BigInteger*, 0x40>(this, std::forward<::Mono::Math::BigInteger*>(value));
}
constexpr ::Mono::Math::BigInteger* Mono::Security::Cryptography::DSAManaged::__get_x()  {
return ::cordl_internals::getInstanceField<::Mono::Math::BigInteger*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> Mono::Security::Cryptography::DSAManaged::__get_x() const {
return ::cordl_internals::getInstanceField<::Mono::Math::BigInteger*, 0x40>(this);
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_y(::Mono::Math::BigInteger*  value)  {
::cordl_internals::setInstanceField<::Mono::Math::BigInteger*, 0x48>(this, std::forward<::Mono::Math::BigInteger*>(value));
}
constexpr ::Mono::Math::BigInteger* Mono::Security::Cryptography::DSAManaged::__get_y()  {
return ::cordl_internals::getInstanceField<::Mono::Math::BigInteger*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> Mono::Security::Cryptography::DSAManaged::__get_y() const {
return ::cordl_internals::getInstanceField<::Mono::Math::BigInteger*, 0x48>(this);
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_j(::Mono::Math::BigInteger*  value)  {
::cordl_internals::setInstanceField<::Mono::Math::BigInteger*, 0x50>(this, std::forward<::Mono::Math::BigInteger*>(value));
}
constexpr ::Mono::Math::BigInteger* Mono::Security::Cryptography::DSAManaged::__get_j()  {
return ::cordl_internals::getInstanceField<::Mono::Math::BigInteger*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> Mono::Security::Cryptography::DSAManaged::__get_j() const {
return ::cordl_internals::getInstanceField<::Mono::Math::BigInteger*, 0x50>(this);
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_seed(::Mono::Math::BigInteger*  value)  {
::cordl_internals::setInstanceField<::Mono::Math::BigInteger*, 0x58>(this, std::forward<::Mono::Math::BigInteger*>(value));
}
constexpr ::Mono::Math::BigInteger* Mono::Security::Cryptography::DSAManaged::__get_seed()  {
return ::cordl_internals::getInstanceField<::Mono::Math::BigInteger*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> Mono::Security::Cryptography::DSAManaged::__get_seed() const {
return ::cordl_internals::getInstanceField<::Mono::Math::BigInteger*, 0x58>(this);
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_counter(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Security::Cryptography::DSAManaged::__get_counter()  {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
constexpr int32_t const& Mono::Security::Cryptography::DSAManaged::__get_counter() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_j_missing(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x64>(this, std::forward<bool>(value));
}
constexpr bool& Mono::Security::Cryptography::DSAManaged::__get_j_missing()  {
return ::cordl_internals::getInstanceField<bool, 0x64>(this);
}
constexpr bool const& Mono::Security::Cryptography::DSAManaged::__get_j_missing() const {
return ::cordl_internals::getInstanceField<bool, 0x64>(this);
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_rng(::System::Security::Cryptography::RandomNumberGenerator*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::RandomNumberGenerator*, 0x68>(this, std::forward<::System::Security::Cryptography::RandomNumberGenerator*>(value));
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator* Mono::Security::Cryptography::DSAManaged::__get_rng()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::RandomNumberGenerator*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RandomNumberGenerator*> Mono::Security::Cryptography::DSAManaged::__get_rng() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::RandomNumberGenerator*, 0x68>(this);
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_KeyGenerated(::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*  value)  {
::cordl_internals::setInstanceField<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*, 0x70>(this, std::forward<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>(value));
}
constexpr ::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler* Mono::Security::Cryptography::DSAManaged::__get_KeyGenerated()  {
return ::cordl_internals::getInstanceField<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*> Mono::Security::Cryptography::DSAManaged::__get_KeyGenerated() const {
return ::cordl_internals::getInstanceField<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*, 0x70>(this);
}
inline ::Mono::Security::Cryptography::DSAManaged* Mono::Security::Cryptography::DSAManaged::New_ctor(int32_t  dwKeySize)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::Cryptography::DSAManaged*>(dwKeySize));
}
inline void Mono::Security::Cryptography::DSAManaged::_ctor(int32_t  dwKeySize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dwKeySize);
}
inline void Mono::Security::Cryptography::DSAManaged::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Mono::Security::Cryptography::DSAManaged::Generate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Mono::Security::Cryptography::DSAManaged::GenerateKeyPair()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "GenerateKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Mono::Security::Cryptography::DSAManaged::add(::ArrayW<uint8_t,::Array<uint8_t>*>  a, ::ArrayW<uint8_t,::Array<uint8_t>*>  b, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, a, b, value);
}
inline void Mono::Security::Cryptography::DSAManaged::GenerateParams(int32_t  keyLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "GenerateParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keyLength);
}
inline ::System::Security::Cryptography::RandomNumberGenerator* Mono::Security::Cryptography::DSAManaged::get_Random()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "get_Random",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RandomNumberGenerator*, false>(*this, ___internal_method);
}
inline int32_t Mono::Security::Cryptography::DSAManaged::get_KeySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "get_KeySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool Mono::Security::Cryptography::DSAManaged::get_PublicOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "get_PublicOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Mono::Security::Cryptography::DSAManaged::NormalizeArray(::ArrayW<uint8_t,::Array<uint8_t>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "NormalizeArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, array);
}
inline ::System::Security::Cryptography::DSAParameters Mono::Security::Cryptography::DSAManaged::ExportParameters(bool  includePrivateParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "ExportParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSAParameters, false>(*this, ___internal_method, includePrivateParameters);
}
inline void Mono::Security::Cryptography::DSAManaged::ImportParameters(::System::Security::Cryptography::DSAParameters  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "ImportParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSAParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parameters);
}
inline bool Mono::Security::Cryptography::DSAManaged::VerifySignature(::ArrayW<uint8_t,::Array<uint8_t>*>  rgbHash, ::ArrayW<uint8_t,::Array<uint8_t>*>  rgbSignature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, rgbHash, rgbSignature);
}
inline void Mono::Security::Cryptography::DSAManaged::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
inline void Mono::Security::Cryptography::DSAManaged::add_KeyGenerated(::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "add_KeyGenerated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void Mono::Security::Cryptography::DSAManaged::remove_KeyGenerated(::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                            "remove_KeyGenerated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
