#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MemoryHandle)
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System {
class IDisposable;
}
namespace System::Buffers {
class IPinnable;
}
// Forward declare root types
namespace System::Buffers {
struct MemoryHandle;
}
// Write type traits
MARK_VAL_T(::System::Buffers::MemoryHandle);
// Type: System.Buffers::MemoryHandle
namespace System::Buffers {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3884))
// CS Name: ::System.Buffers::MemoryHandle
struct CORDL_TYPE MemoryHandle : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _pointer offset 0x0
 __declspec(property(get=__get__pointer, put=__set__pointer)) ::cordl_internals::Ptr<void>  _pointer;

/// @brief Field _handle offset 0x8
 __declspec(property(get=__get__handle, put=__set__handle)) ::System::Runtime::InteropServices::GCHandle  _handle;

/// @brief Field _pinnable offset 0x10
 __declspec(property(get=__get__pinnable, put=__set__pinnable)) ::System::Buffers::IPinnable*  _pinnable;

 __declspec(property(get=get_Pointer)) ::cordl_internals::Ptr<void>  Pointer;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set__pointer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get__pointer() ;

constexpr ::cordl_internals::Ptr<void> const& __get__pointer() const;

constexpr void __set__handle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr ::System::Runtime::InteropServices::GCHandle& __get__handle() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __get__handle() const;

constexpr void __set__pinnable(::System::Buffers::IPinnable*  value) ;

constexpr ::System::Buffers::IPinnable* __get__pinnable() ;

constexpr ::cordl_internals::to_const_pointer<::System::Buffers::IPinnable*> __get__pinnable() const;

/// @brief Method .ctor addr 0x258c520 size 0xc virtual false final false
inline void _ctor(::cordl_internals::Ptr<void>  pointer, ::System::Runtime::InteropServices::GCHandle  handle, ::System::Buffers::IPinnable*  pinnable) ;

/// @brief Method get_Pointer addr 0x258c52c size 0x8 virtual false final false
inline ::cordl_internals::Ptr<void> get_Pointer() ;

/// @brief Method Dispose addr 0x258c534 size 0xc8 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_pointer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }, CppParam { name: "_pinnable", ty: "::System::Buffers::IPinnable*", modifiers: "", def_value: None }]
constexpr MemoryHandle(::cordl_internals::Ptr<void>  _pointer, ::System::Runtime::InteropServices::GCHandle  _handle, ::System::Buffers::IPinnable*  _pinnable) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MemoryHandle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MemoryHandle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Buffers::MemoryHandle, 0x18>, "Size mismatch!");

} // namespace end def System::Buffers
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::MemoryHandle, "System.Buffers", "MemoryHandle");
