#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIntPtr)
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
struct UIntPtr;
}
// Write type traits
MARK_VAL_T(::System::UIntPtr);
// Type: System::UIntPtr
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2638))
// CS Name: ::System::UIntPtr
struct CORDL_TYPE UIntPtr : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _pointer offset 0x0
 __declspec(property(get=__get__pointer, put=__set__pointer)) ::cordl_internals::Ptr<void>  _pointer;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::cordl_internals::uintptr_t>"
constexpr operator  ::System::IEquatable_1<::cordl_internals::uintptr_t>*() ;

static inline void setStaticF_Zero(::cordl_internals::uintptr_t  value) ;

static inline ::cordl_internals::uintptr_t getStaticF_Zero() ;

constexpr void __set__pointer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get__pointer() ;

constexpr ::cordl_internals::Ptr<void> const& __get__pointer() const;

/// @brief Method .ctor addr 0x2608bbc size 0x60 virtual false final false
inline void _ctor(uint64_t  value) ;

/// @brief Method .ctor addr 0x2608c24 size 0xc virtual false final false
inline void _ctor(uint32_t  value) ;

/// @brief Method .ctor addr 0x2608c30 size 0x8 virtual false final false
inline void _ctor(::cordl_internals::Ptr<void>  value) ;

/// @brief Method Equals addr 0x2608c38 size 0x78 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2608cb0 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2608cb8 size 0x70 virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x2608d28 size 0xa4 virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method op_Equality addr 0x2608dcc size 0xc virtual false final false
static inline bool op_Equality(::cordl_internals::uintptr_t  value1, ::cordl_internals::uintptr_t  value2) ;

/// @brief Method op_Inequality addr 0x2608dd8 size 0xc virtual false final false
static inline bool op_Inequality(::cordl_internals::uintptr_t  value1, ::cordl_internals::uintptr_t  value2) ;

/// @brief Method op_Explicit addr 0x2608de4 size 0x4 virtual false final false
static inline uint64_t op_Explicit_uint64_t(::cordl_internals::uintptr_t  value) ;

/// @brief Method op_Explicit addr 0x2608de8 size 0x4 virtual false final false
static inline uint32_t op_Explicit_uint32_t(::cordl_internals::uintptr_t  value) ;

/// @brief Method op_Explicit addr 0x2608dec size 0x20 virtual false final false
static inline ::cordl_internals::uintptr_t op_Explicit___cordl_internals__uintptr_t(uint64_t  value) ;

/// @brief Method op_Explicit addr 0x2608e0c size 0x8 virtual false final false
static inline ::cordl_internals::uintptr_t op_Explicit___cordl_internals__uintptr_t(uint32_t  value) ;

/// @brief Method get_Size addr 0x2608c1c size 0x8 virtual false final false
static inline int32_t get_Size() ;

/// @brief Method System.IEquatable<System.UIntPtr>.Equals addr 0x2608e14 size 0x10 virtual true final true
inline bool System_IEquatable_System_UIntPtr__Equals(::cordl_internals::uintptr_t  other) ;

// Ctor Parameters [CppParam { name: "_pointer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }]
constexpr UIntPtr(::cordl_internals::Ptr<void>  _pointer) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UIntPtr(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UIntPtr()  = default;


// Fields

// Static field Zero


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UIntPtr, 0x8>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::UIntPtr, "System", "UIntPtr");
