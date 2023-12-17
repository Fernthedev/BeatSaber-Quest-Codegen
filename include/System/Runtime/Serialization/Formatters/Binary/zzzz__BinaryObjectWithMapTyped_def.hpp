#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryObjectWithMapTyped)
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryTypeEnum;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectWithMapTyped;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped);
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryObjectWithMapTyped
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3269))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::BinaryObjectWithMapTyped*
class CORDL_TYPE BinaryObjectWithMapTyped : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field binaryHeaderEnum offset 0x10
 __declspec(property(get=__get_binaryHeaderEnum, put=__set_binaryHeaderEnum)) ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  binaryHeaderEnum;

/// @brief Field objectId offset 0x14
 __declspec(property(get=__get_objectId, put=__set_objectId)) int32_t  objectId;

/// @brief Field name offset 0x18
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field numMembers offset 0x20
 __declspec(property(get=__get_numMembers, put=__set_numMembers)) int32_t  numMembers;

/// @brief Field memberNames offset 0x28
 __declspec(property(get=__get_memberNames, put=__set_memberNames)) ::ArrayW<::StringW,::Array<::StringW>*>  memberNames;

/// @brief Field binaryTypeEnumA offset 0x30
 __declspec(property(get=__get_binaryTypeEnumA, put=__set_binaryTypeEnumA)) ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>  binaryTypeEnumA;

/// @brief Field typeInformationA offset 0x38
 __declspec(property(get=__get_typeInformationA, put=__set_typeInformationA)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  typeInformationA;

/// @brief Field memberAssemIds offset 0x40
 __declspec(property(get=__get_memberAssemIds, put=__set_memberAssemIds)) ::ArrayW<int32_t,::Array<int32_t>*>  memberAssemIds;

/// @brief Field assemId offset 0x48
 __declspec(property(get=__get_assemId, put=__set_assemId)) int32_t  assemId;

constexpr void __set_binaryHeaderEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum& __get_binaryHeaderEnum() ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const& __get_binaryHeaderEnum() const;

constexpr void __set_objectId(int32_t  value) ;

constexpr int32_t& __get_objectId() ;

constexpr int32_t const& __get_objectId() const;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_numMembers(int32_t  value) ;

constexpr int32_t& __get_numMembers() ;

constexpr int32_t const& __get_numMembers() const;

constexpr void __set_memberNames(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_memberNames() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_memberNames() const;

constexpr void __set_binaryTypeEnumA(::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>  value) ;

constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>& __get_binaryTypeEnumA() ;

constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> const& __get_binaryTypeEnumA() const;

constexpr void __set_typeInformationA(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_typeInformationA() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_typeInformationA() const;

constexpr void __set_memberAssemIds(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_memberAssemIds() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_memberAssemIds() const;

constexpr void __set_assemId(int32_t  value) ;

constexpr int32_t& __get_assemId() ;

constexpr int32_t const& __get_assemId() const;

static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* New_ctor() ;

/// @brief Method .ctor addr 0x24c27c4 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* New_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  binaryHeaderEnum) ;

/// @brief Method .ctor addr 0x24c27cc size 0x28 virtual false final false
inline void _ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  binaryHeaderEnum) ;

/// @brief Method Set addr 0x24c27f4 size 0x2c virtual false final false
inline void Set(int32_t  objectId, ::StringW  name, int32_t  numMembers, ::ArrayW<::StringW,::Array<::StringW>*>  memberNames, ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>  binaryTypeEnumA, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  typeInformationA, ::ArrayW<int32_t,::Array<int32_t>*>  memberAssemIds, int32_t  assemId) ;

/// @brief Method Write addr 0x24c2820 size 0x1d8 virtual true final true
inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*  sout) ;

/// @brief Method Read addr 0x24c29f8 size 0x2a4 virtual true final true
inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*  input) ;

// Ctor Parameters [CppParam { name: "", ty: "BinaryObjectWithMapTyped", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BinaryObjectWithMapTyped(BinaryObjectWithMapTyped && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BinaryObjectWithMapTyped", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BinaryObjectWithMapTyped(BinaryObjectWithMapTyped const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BinaryObjectWithMapTyped()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped, 0x50>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectWithMapTyped");
