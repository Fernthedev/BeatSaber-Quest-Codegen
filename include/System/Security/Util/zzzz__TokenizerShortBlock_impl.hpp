#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Util/zzzz__TokenizerShortBlock_def.hpp"
//  Writing Method size for method: ::System::Security::Util::TokenizerShortBlock._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::TokenizerShortBlock::*)()>(&::System::Security::Util::TokenizerShortBlock::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24564fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::TokenizerShortBlock*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Util::TokenizerShortBlock::__set_m_block(::ArrayW<int16_t,::Array<int16_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int16_t,::Array<int16_t>*>, 0x10>(this, std::forward<::ArrayW<int16_t,::Array<int16_t>*>>(value));
}
constexpr ::ArrayW<int16_t,::Array<int16_t>*>& System::Security::Util::TokenizerShortBlock::__get_m_block()  {
return ::cordl_internals::getInstanceField<::ArrayW<int16_t,::Array<int16_t>*>, 0x10>(this);
}
constexpr ::ArrayW<int16_t,::Array<int16_t>*> const& System::Security::Util::TokenizerShortBlock::__get_m_block() const {
return ::cordl_internals::getInstanceField<::ArrayW<int16_t,::Array<int16_t>*>, 0x10>(this);
}
constexpr void System::Security::Util::TokenizerShortBlock::__set_m_next(::System::Security::Util::TokenizerShortBlock*  value)  {
::cordl_internals::setInstanceField<::System::Security::Util::TokenizerShortBlock*, 0x18>(this, std::forward<::System::Security::Util::TokenizerShortBlock*>(value));
}
constexpr ::System::Security::Util::TokenizerShortBlock* System::Security::Util::TokenizerShortBlock::__get_m_next()  {
return ::cordl_internals::getInstanceField<::System::Security::Util::TokenizerShortBlock*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::TokenizerShortBlock*> System::Security::Util::TokenizerShortBlock::__get_m_next() const {
return ::cordl_internals::getInstanceField<::System::Security::Util::TokenizerShortBlock*, 0x18>(this);
}
inline ::System::Security::Util::TokenizerShortBlock* System::Security::Util::TokenizerShortBlock::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Util::TokenizerShortBlock*>());
}
inline void System::Security::Util::TokenizerShortBlock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::TokenizerShortBlock*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
