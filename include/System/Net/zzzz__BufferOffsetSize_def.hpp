#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferOffsetSize)
// Forward declare root types
namespace System::Net {
class BufferOffsetSize;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::BufferOffsetSize);
// Type: System.Net::BufferOffsetSize
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9100))
// CS Name: ::System.Net::BufferOffsetSize*
class CORDL_TYPE BufferOffsetSize : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field Buffer offset 0x10
 __declspec(property(get=__get_Buffer, put=__set_Buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Buffer;

/// @brief Field Offset offset 0x18
 __declspec(property(get=__get_Offset, put=__set_Offset)) int32_t  Offset;

/// @brief Field Size offset 0x1c
 __declspec(property(get=__get_Size, put=__set_Size)) int32_t  Size;

constexpr void __set_Buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_Buffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_Buffer() const;

constexpr void __set_Offset(int32_t  value) ;

constexpr int32_t& __get_Offset() ;

constexpr int32_t const& __get_Offset() const;

constexpr void __set_Size(int32_t  value) ;

constexpr int32_t& __get_Size() ;

constexpr int32_t const& __get_Size() const;

static inline ::System::Net::BufferOffsetSize* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, bool  copyBuffer) ;

/// @brief Method .ctor addr 0x29a5d50 size 0xac virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, bool  copyBuffer) ;

static inline ::System::Net::BufferOffsetSize* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, bool  copyBuffer) ;

/// @brief Method .ctor addr 0x29a5dfc size 0x20 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, bool  copyBuffer) ;

// Ctor Parameters [CppParam { name: "", ty: "BufferOffsetSize", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferOffsetSize(BufferOffsetSize && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferOffsetSize", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferOffsetSize(BufferOffsetSize const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BufferOffsetSize()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::BufferOffsetSize, 0x20>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::BufferOffsetSize);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::BufferOffsetSize*, "System.Net", "BufferOffsetSize");
