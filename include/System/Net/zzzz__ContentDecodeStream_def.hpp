#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentDecodeStream)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net {
struct __ContentDecodeStream__Mode;
}
namespace System::Net {
class WebOperation;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::Net {
struct __ContentDecodeStream__Mode;
}
namespace System::Net {
class ContentDecodeStream;
}
// Write type traits
MARK_VAL_T(::System::Net::__ContentDecodeStream__Mode);
MARK_REF_PTR_T(::System::Net::ContentDecodeStream);
// Type: ::Mode
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9155))
// CS Name: ::ContentDecodeStream::Mode
struct CORDL_TYPE __ContentDecodeStream__Mode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ContentDecodeStream__Mode_Unwrapped
enum struct ____ContentDecodeStream__Mode_Unwrapped : int32_t {
__E_GZip = static_cast<int32_t>(0x0),
__E_Deflate = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field GZip value: static_cast<int32_t>(0x0)
static ::System::Net::__ContentDecodeStream__Mode const GZip;

/// @brief Field Deflate value: static_cast<int32_t>(0x1)
static ::System::Net::__ContentDecodeStream__Mode const Deflate;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ContentDecodeStream__Mode_Unwrapped () const noexcept {
return std::bit_cast<____ContentDecodeStream__Mode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ContentDecodeStream__Mode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ContentDecodeStream__Mode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ContentDecodeStream__Mode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__ContentDecodeStream__Mode, 0x4>, "Size mismatch!");

} // namespace end def System::Net
// Type: System.Net::ContentDecodeStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9229))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9156))
// CS Name: ::System.Net::ContentDecodeStream*
class CORDL_TYPE ContentDecodeStream : public ::System::Net::WebReadStream {
public:
// Declarations
using Mode = ::System::Net::__ContentDecodeStream__Mode;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Net::WebReadStream)]{};

/// @brief Field <OriginalInnerStream>k__BackingField offset 0x40
 __declspec(property(get=__get__OriginalInnerStream_k__BackingField, put=__set__OriginalInnerStream_k__BackingField)) ::System::IO::Stream*  _OriginalInnerStream_k__BackingField;

 __declspec(property(get=get_OriginalInnerStream)) ::System::IO::Stream*  OriginalInnerStream;

constexpr void __set__OriginalInnerStream_k__BackingField(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get__OriginalInnerStream_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get__OriginalInnerStream_k__BackingField() const;

/// @brief Method Create addr 0x29bd31c size 0xec virtual false final false
static inline ::System::Net::ContentDecodeStream* Create(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream, ::System::Net::__ContentDecodeStream__Mode  mode) ;

/// @brief Method get_OriginalInnerStream addr 0x29bd430 size 0x8 virtual false final false
inline ::System::IO::Stream* get_OriginalInnerStream() ;

static inline ::System::Net::ContentDecodeStream* New_ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  decodeStream, ::System::IO::Stream*  originalInnerStream) ;

/// @brief Method .ctor addr 0x29bd408 size 0x28 virtual false final false
inline void _ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  decodeStream, ::System::IO::Stream*  originalInnerStream) ;

/// @brief Method ProcessReadAsync addr 0x29bd438 size 0x24 virtual true final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method FinishReading addr 0x29bd45c size 0xf0 virtual true final false
inline ::System::Threading::Tasks::Task* FinishReading(::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters [CppParam { name: "", ty: "ContentDecodeStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContentDecodeStream(ContentDecodeStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContentDecodeStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContentDecodeStream(ContentDecodeStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContentDecodeStream()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ContentDecodeStream, 0x48>, "Size mismatch!");

} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__ContentDecodeStream__Mode, "System.Net", "ContentDecodeStream/Mode");
NEED_NO_BOX(::System::Net::ContentDecodeStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ContentDecodeStream*, "System.Net", "ContentDecodeStream");
