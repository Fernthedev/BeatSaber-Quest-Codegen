#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectProgress)
namespace System {
class Type;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalMemberTypeE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ParseRecord;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalObjectTypeE;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryTypeEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalMemberValueE;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectProgress;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress);
// Type: System.Runtime.Serialization.Formatters.Binary::ObjectProgress
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3276))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::ObjectProgress*
class CORDL_TYPE ObjectProgress : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::System::Object)]{};

/// @brief Field isInitial offset 0x10
 __declspec(property(get=__get_isInitial, put=__set_isInitial)) bool  isInitial;

/// @brief Field count offset 0x14
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field expectedType offset 0x18
 __declspec(property(get=__get_expectedType, put=__set_expectedType)) ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  expectedType;

/// @brief Field expectedTypeInformation offset 0x20
 __declspec(property(get=__get_expectedTypeInformation, put=__set_expectedTypeInformation)) ::System::Object*  expectedTypeInformation;

/// @brief Field name offset 0x28
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field objectTypeEnum offset 0x30
 __declspec(property(get=__get_objectTypeEnum, put=__set_objectTypeEnum)) ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE  objectTypeEnum;

/// @brief Field memberTypeEnum offset 0x34
 __declspec(property(get=__get_memberTypeEnum, put=__set_memberTypeEnum)) ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE  memberTypeEnum;

/// @brief Field memberValueEnum offset 0x38
 __declspec(property(get=__get_memberValueEnum, put=__set_memberValueEnum)) ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE  memberValueEnum;

/// @brief Field dtType offset 0x40
 __declspec(property(get=__get_dtType, put=__set_dtType)) ::System::Type*  dtType;

/// @brief Field numItems offset 0x48
 __declspec(property(get=__get_numItems, put=__set_numItems)) int32_t  numItems;

/// @brief Field binaryTypeEnum offset 0x4c
 __declspec(property(get=__get_binaryTypeEnum, put=__set_binaryTypeEnum)) ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  binaryTypeEnum;

/// @brief Field typeInformation offset 0x50
 __declspec(property(get=__get_typeInformation, put=__set_typeInformation)) ::System::Object*  typeInformation;

/// @brief Field nullCount offset 0x58
 __declspec(property(get=__get_nullCount, put=__set_nullCount)) int32_t  nullCount;

/// @brief Field memberLength offset 0x5c
 __declspec(property(get=__get_memberLength, put=__set_memberLength)) int32_t  memberLength;

/// @brief Field binaryTypeEnumA offset 0x60
 __declspec(property(get=__get_binaryTypeEnumA, put=__set_binaryTypeEnumA)) ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>  binaryTypeEnumA;

/// @brief Field typeInformationA offset 0x68
 __declspec(property(get=__get_typeInformationA, put=__set_typeInformationA)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  typeInformationA;

/// @brief Field memberNames offset 0x70
 __declspec(property(get=__get_memberNames, put=__set_memberNames)) ::ArrayW<::StringW,::Array<::StringW>*>  memberNames;

/// @brief Field memberTypes offset 0x78
 __declspec(property(get=__get_memberTypes, put=__set_memberTypes)) ::ArrayW<::System::Type*,::Array<::System::Type*>*>  memberTypes;

/// @brief Field pr offset 0x80
 __declspec(property(get=__get_pr, put=__set_pr)) ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  pr;

static inline void setStaticF_opRecordIdCount(int32_t  value) ;

static inline int32_t getStaticF_opRecordIdCount() ;

constexpr void __set_isInitial(bool  value) ;

constexpr bool& __get_isInitial() ;

constexpr bool const& __get_isInitial() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_expectedType(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& __get_expectedType() ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const& __get_expectedType() const;

constexpr void __set_expectedTypeInformation(::System::Object*  value) ;

constexpr ::System::Object* __get_expectedTypeInformation() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_expectedTypeInformation() const;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_objectTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE& __get_objectTypeEnum() ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE const& __get_objectTypeEnum() const;

constexpr void __set_memberTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE& __get_memberTypeEnum() ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE const& __get_memberTypeEnum() const;

constexpr void __set_memberValueEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE& __get_memberValueEnum() ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const& __get_memberValueEnum() const;

constexpr void __set_dtType(::System::Type*  value) ;

constexpr ::System::Type* __get_dtType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_dtType() const;

constexpr void __set_numItems(int32_t  value) ;

constexpr int32_t& __get_numItems() ;

constexpr int32_t const& __get_numItems() const;

constexpr void __set_binaryTypeEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& __get_binaryTypeEnum() ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const& __get_binaryTypeEnum() const;

constexpr void __set_typeInformation(::System::Object*  value) ;

constexpr ::System::Object* __get_typeInformation() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_typeInformation() const;

constexpr void __set_nullCount(int32_t  value) ;

constexpr int32_t& __get_nullCount() ;

constexpr int32_t const& __get_nullCount() const;

constexpr void __set_memberLength(int32_t  value) ;

constexpr int32_t& __get_memberLength() ;

constexpr int32_t const& __get_memberLength() const;

constexpr void __set_binaryTypeEnumA(::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>  value) ;

constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>& __get_binaryTypeEnumA() ;

constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> const& __get_binaryTypeEnumA() const;

constexpr void __set_typeInformationA(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_typeInformationA() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_typeInformationA() const;

constexpr void __set_memberNames(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_memberNames() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_memberNames() const;

constexpr void __set_memberTypes(::ArrayW<::System::Type*,::Array<::System::Type*>*>  value) ;

constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*>& __get_memberTypes() ;

constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*> const& __get_memberTypes() const;

constexpr void __set_pr(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* __get_pr() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*> __get_pr() const;

static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* New_ctor() ;

/// @brief Method .ctor addr 0x24c4138 size 0x70 virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0x24c41a8 size 0x50 virtual false final false
inline void Init() ;

/// @brief Method ArrayCountIncrement addr 0x24c41f8 size 0x10 virtual false final false
inline void ArrayCountIncrement(int32_t  value) ;

/// @brief Method GetNext addr 0x24c4208 size 0x114 virtual false final false
inline bool GetNext(ByRef<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>  outBinaryTypeEnum, ByRef<::System::Object*>  outTypeInformation) ;

// Ctor Parameters [CppParam { name: "", ty: "ObjectProgress", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectProgress(ObjectProgress && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectProgress", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectProgress(ObjectProgress const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObjectProgress()  = default;
public:


// Fields

// Static field opRecordIdCount


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress, 0x88>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*, "System.Runtime.Serialization.Formatters.Binary", "ObjectProgress");
