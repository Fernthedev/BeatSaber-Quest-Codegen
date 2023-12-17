#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SizedArray)
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class SizedArray;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::SizedArray);
// Type: System.Runtime.Serialization.Formatters.Binary::SizedArray
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3293))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::SizedArray*
class CORDL_TYPE SizedArray : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field objects offset 0x10
 __declspec(property(get=__get_objects, put=__set_objects)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  objects;

/// @brief Field negObjects offset 0x18
 __declspec(property(get=__get_negObjects, put=__set_negObjects)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  negObjects;

 __declspec(property(get=get_Item, put=set_Item)) ::System::Object*  Item[];

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

constexpr void __set_objects(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_objects() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_objects() const;

constexpr void __set_negObjects(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_negObjects() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_negObjects() const;

static inline ::System::Runtime::Serialization::Formatters::Binary::SizedArray* New_ctor() ;

/// @brief Method .ctor addr 0x24d2070 size 0x6c virtual false final false
inline void _ctor() ;

static inline ::System::Runtime::Serialization::Formatters::Binary::SizedArray* New_ctor(int32_t  length) ;

/// @brief Method .ctor addr 0x24d2148 size 0x78 virtual false final false
inline void _ctor(int32_t  length) ;

static inline ::System::Runtime::Serialization::Formatters::Binary::SizedArray* New_ctor(::System::Runtime::Serialization::Formatters::Binary::SizedArray*  sizedArray) ;

/// @brief Method .ctor addr 0x24d5a64 size 0xb4 virtual false final false
inline void _ctor(::System::Runtime::Serialization::Formatters::Binary::SizedArray*  sizedArray) ;

/// @brief Method Clone addr 0x24d5b18 size 0x60 virtual true final true
inline ::System::Object* Clone() ;

/// @brief Method get_Item addr 0x24d4820 size 0x74 virtual false final false
inline ::System::Object* get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x24d4720 size 0x100 virtual false final false
inline void set_Item(int32_t  index, ::System::Object*  value) ;

/// @brief Method IncreaseCapacity addr 0x24d5b78 size 0x220 virtual false final false
inline void IncreaseCapacity(int32_t  index) ;

// Ctor Parameters [CppParam { name: "", ty: "SizedArray", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SizedArray(SizedArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SizedArray", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SizedArray(SizedArray const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SizedArray()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::SizedArray, 0x20>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::SizedArray);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::SizedArray*, "System.Runtime.Serialization.Formatters.Binary", "SizedArray");
