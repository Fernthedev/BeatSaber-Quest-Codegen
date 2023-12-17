#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mono/Math/Prime/zzzz__PrimalityTest_def.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Mono/Math/Prime/zzzz__ConfidenceFactor_def.hpp"
//  Writing Method size for method: ::Mono::Math::Prime::PrimalityTest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Math::Prime::PrimalityTest::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::Mono::Math::Prime::PrimalityTest::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x242b2e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::PrimalityTest*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::Prime::PrimalityTest.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Math::Prime::PrimalityTest::*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor)>(&::Mono::Math::Prime::PrimalityTest::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x242b418;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::PrimalityTest*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::PrimalityTest*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::Mono::Math::Prime::PrimalityTest* Mono::Math::Prime::PrimalityTest::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Math::Prime::PrimalityTest*>(object, method));
}
inline void Mono::Math::Prime::PrimalityTest::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::PrimalityTest*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline bool Mono::Math::Prime::PrimalityTest::Invoke(::Mono::Math::BigInteger*  bi, ::Mono::Math::Prime::ConfidenceFactor  confidence)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::PrimalityTest*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::Prime::ConfidenceFactor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, bi, confidence);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
