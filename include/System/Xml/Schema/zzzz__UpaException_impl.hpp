#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "System/Xml/Schema/zzzz__UpaException_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::UpaException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::UpaException::*)(::System::Object*, ::System::Object*)>(&::System::Xml::Schema::UpaException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x28acab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UpaException*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::UpaException::__set_particle1(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x90>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Xml::Schema::UpaException::__get_particle1()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Xml::Schema::UpaException::__get_particle1() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x90>(this);
}
constexpr void System::Xml::Schema::UpaException::__set_particle2(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x98>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Xml::Schema::UpaException::__get_particle2()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Xml::Schema::UpaException::__get_particle2() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x98>(this);
}
inline ::System::Xml::Schema::UpaException* System::Xml::Schema::UpaException::New_ctor(::System::Object*  particle1, ::System::Object*  particle2)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::UpaException*>(particle1, particle2));
}
inline void System::Xml::Schema::UpaException::_ctor(::System::Object*  particle1, ::System::Object*  particle2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UpaException*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, particle1, particle2);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
