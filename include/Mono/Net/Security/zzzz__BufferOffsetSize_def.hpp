#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferOffsetSize)
// Forward declare root types
namespace Mono::Net::Security {
class BufferOffsetSize;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::BufferOffsetSize);
// Type: Mono.Net.Security::BufferOffsetSize
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8815))
// CS Name: ::Mono.Net.Security::BufferOffsetSize*
class CORDL_TYPE BufferOffsetSize : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field Buffer offset 0x10
 __declspec(property(get=__get_Buffer, put=__set_Buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Buffer;

/// @brief Field Offset offset 0x18
 __declspec(property(get=__get_Offset, put=__set_Offset)) int32_t  Offset;

/// @brief Field Size offset 0x1c
 __declspec(property(get=__get_Size, put=__set_Size)) int32_t  Size;

/// @brief Field TotalBytes offset 0x20
 __declspec(property(get=__get_TotalBytes, put=__set_TotalBytes)) int32_t  TotalBytes;

/// @brief Field Complete offset 0x24
 __declspec(property(get=__get_Complete, put=__set_Complete)) bool  Complete;

 __declspec(property(get=get_EndOffset)) int32_t  EndOffset;

 __declspec(property(get=get_Remaining)) int32_t  Remaining;

constexpr void __set_Buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_Buffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_Buffer() const;

constexpr void __set_Offset(int32_t  value) ;

constexpr int32_t& __get_Offset() ;

constexpr int32_t const& __get_Offset() const;

constexpr void __set_Size(int32_t  value) ;

constexpr int32_t& __get_Size() ;

constexpr int32_t const& __get_Size() const;

constexpr void __set_TotalBytes(int32_t  value) ;

constexpr int32_t& __get_TotalBytes() ;

constexpr int32_t const& __get_TotalBytes() const;

constexpr void __set_Complete(bool  value) ;

constexpr bool& __get_Complete() ;

constexpr bool const& __get_Complete() const;

/// @brief Method get_EndOffset addr 0x281dda8 size 0xc virtual false final false
inline int32_t get_EndOffset() ;

/// @brief Method get_Remaining addr 0x281ddb4 size 0x28 virtual false final false
inline int32_t get_Remaining() ;

static inline ::Mono::Net::Security::BufferOffsetSize* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method .ctor addr 0x281dddc size 0x104 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method ToString addr 0x281dee0 size 0xa0 virtual true final false
inline ::StringW ToString() ;

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


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::BufferOffsetSize, 0x28>, "Size mismatch!");

} // namespace end def Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::BufferOffsetSize);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::BufferOffsetSize*, "Mono.Net.Security", "BufferOffsetSize");
