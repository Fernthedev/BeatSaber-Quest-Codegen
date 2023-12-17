#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ParseRecord_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalParseTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalMemberTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalMemberValueE_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ReadObjectInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalObjectTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalObjectPositionE_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__PrimitiveArray_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalArrayTypeE_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ParseRecord._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ParseRecord::*)()>(&::System::Runtime::Serialization::Formatters::Binary::ParseRecord::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24d222c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ParseRecord.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ParseRecord::*)()>(&::System::Runtime::Serialization::Formatters::Binary::ParseRecord::Init)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24d4264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::Formatters::Binary::ParseRecord::setStaticF_parseRecordIdCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "parseRecordIdCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Runtime::Serialization::Formatters::Binary::ParseRecord::getStaticF_parseRecordIdCount()  {
return ::cordl_internals::getStaticField<int32_t, "parseRecordIdCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get>();
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRparseTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE, 0x10>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRparseTypeEnum()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE, 0x10>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRparseTypeEnum() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE, 0x10>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRobjectTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE, 0x14>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectTypeEnum()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE, 0x14>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectTypeEnum() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE, 0x14>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRarrayTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE, 0x18>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRarrayTypeEnum()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE, 0x18>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRarrayTypeEnum() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE, 0x18>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRmemberTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE, 0x1c>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRmemberTypeEnum()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE, 0x1c>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRmemberTypeEnum() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE, 0x1c>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRmemberValueEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE, 0x20>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRmemberValueEnum()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE, 0x20>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRmemberValueEnum() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE, 0x20>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRobjectPositionEnum(::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE, 0x24>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectPositionEnum()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE, 0x24>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectPositionEnum() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE, 0x24>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRname(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRname()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRname() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRvalue(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRvalue()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRvalue() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRvarValue(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x38>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRvarValue()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRvarValue() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x38>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRkeyDt(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRkeyDt()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRkeyDt() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRdtType(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x48>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRdtType()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRdtType() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x48>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRdtTypeCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, 0x50>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRdtTypeCode()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, 0x50>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRdtTypeCode() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, 0x50>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRisEnum(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisEnum()  {
return ::cordl_internals::getInstanceField<bool, 0x54>(this);
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisEnum() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRobjectId(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x58>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectId()  {
return ::cordl_internals::getInstanceField<int64_t, 0x58>(this);
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectId() const {
return ::cordl_internals::getInstanceField<int64_t, 0x58>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRidRef(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x60>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRidRef()  {
return ::cordl_internals::getInstanceField<int64_t, 0x60>(this);
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRidRef() const {
return ::cordl_internals::getInstanceField<int64_t, 0x60>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRarrayElementTypeString(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRarrayElementTypeString()  {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRarrayElementTypeString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRarrayElementType(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x70>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRarrayElementType()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRarrayElementType() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x70>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRisArrayVariant(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisArrayVariant()  {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisArrayVariant() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRarrayElementTypeCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, 0x7c>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRarrayElementTypeCode()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, 0x7c>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRarrayElementTypeCode() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, 0x7c>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRrank(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRrank()  {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this);
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRrank() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRlengthA(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x88>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRlengthA()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x88>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRlengthA() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x88>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRpositionA(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x90>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRpositionA()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x90>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRpositionA() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x90>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRlowerBoundA(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x98>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRlowerBoundA()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x98>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRlowerBoundA() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x98>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRupperBoundA(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xa0>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRupperBoundA()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xa0>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRupperBoundA() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xa0>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRindexMap(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xa8>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRindexMap()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xa8>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRindexMap() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xa8>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRmemberIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xb0>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRmemberIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0xb0>(this);
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRmemberIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb0>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRlinearlength(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xb4>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRlinearlength()  {
return ::cordl_internals::getInstanceField<int32_t, 0xb4>(this);
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRlinearlength() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb4>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRrectangularMap(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xb8>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRrectangularMap()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xb8>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRrectangularMap() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0xb8>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRisLowerBound(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc0>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisLowerBound()  {
return ::cordl_internals::getInstanceField<bool, 0xc0>(this);
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisLowerBound() const {
return ::cordl_internals::getInstanceField<bool, 0xc0>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRtopId(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0xc8>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRtopId()  {
return ::cordl_internals::getInstanceField<int64_t, 0xc8>(this);
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRtopId() const {
return ::cordl_internals::getInstanceField<int64_t, 0xc8>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRheaderId(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0xd0>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRheaderId()  {
return ::cordl_internals::getInstanceField<int64_t, 0xd0>(this);
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRheaderId() const {
return ::cordl_internals::getInstanceField<int64_t, 0xd0>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRobjectInfo(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*, 0xd8>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectInfo()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*> System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectInfo() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*, 0xd8>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRisValueTypeFixup(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xe0>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisValueTypeFixup()  {
return ::cordl_internals::getInstanceField<bool, 0xe0>(this);
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisValueTypeFixup() const {
return ::cordl_internals::getInstanceField<bool, 0xe0>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRnewObj(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0xe8>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRnewObj()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0xe8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRnewObj() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0xe8>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRobjectA(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0xf0>(this, std::forward<::ArrayW<::System::Object*,::Array<::System::Object*>*>>(value));
}
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectA()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0xf0>(this);
}
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRobjectA() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0xf0>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRprimitiveArray(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*, 0xf8>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRprimitiveArray()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*, 0xf8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*> System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRprimitiveArray() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*, 0xf8>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRisRegistered(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x100>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisRegistered()  {
return ::cordl_internals::getInstanceField<bool, 0x100>(this);
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRisRegistered() const {
return ::cordl_internals::getInstanceField<bool, 0x100>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRmemberData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x108>(this, std::forward<::ArrayW<::System::Object*,::Array<::System::Object*>*>>(value));
}
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRmemberData()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x108>(this);
}
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRmemberData() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x108>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRsi(::System::Runtime::Serialization::SerializationInfo*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::SerializationInfo*, 0x110>(this, std::forward<::System::Runtime::Serialization::SerializationInfo*>(value));
}
constexpr ::System::Runtime::Serialization::SerializationInfo* System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRsi()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::SerializationInfo*, 0x110>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRsi() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::SerializationInfo*, 0x110>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ParseRecord::__set_PRnullCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x118>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRnullCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x118>(this);
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ParseRecord::__get_PRnullCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x118>(this);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* System::Runtime::Serialization::Formatters::Binary::ParseRecord::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>());
}
inline void System::Runtime::Serialization::Formatters::Binary::ParseRecord::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::ParseRecord::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
