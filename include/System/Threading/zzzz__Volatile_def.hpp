#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Volatile)
namespace System::Threading {
struct __Volatile__VolatileBoolean;
}
namespace System::Threading {
struct __Volatile__VolatileInt32;
}
namespace System::Threading {
struct __Volatile__VolatileObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class Volatile;
}
namespace System::Threading {
struct __Volatile__VolatileBoolean;
}
namespace System::Threading {
struct __Volatile__VolatileInt32;
}
namespace System::Threading {
struct __Volatile__VolatileObject;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Volatile);
MARK_VAL_T(::System::Threading::__Volatile__VolatileBoolean);
MARK_VAL_T(::System::Threading::__Volatile__VolatileInt32);
MARK_VAL_T(::System::Threading::__Volatile__VolatileObject);
// Type: ::VolatileBoolean
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2752))
// CS Name: ::Volatile::VolatileBoolean
struct CORDL_TYPE __Volatile__VolatileBoolean : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field Value offset 0x0
 __declspec(property(get=__get_Value, put=__set_Value)) bool  Value;

constexpr void __set_Value(bool  value) ;

constexpr bool& __get_Value() ;

constexpr bool const& __get_Value() const;

// Ctor Parameters [CppParam { name: "Value", ty: "bool", modifiers: "", def_value: None }]
constexpr __Volatile__VolatileBoolean(bool  Value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Volatile__VolatileBoolean(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Volatile__VolatileBoolean()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__Volatile__VolatileBoolean, 0x1>, "Size mismatch!");

} // namespace end def System::Threading
// Type: ::VolatileInt32
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2753))
// CS Name: ::Volatile::VolatileInt32
struct CORDL_TYPE __Volatile__VolatileInt32 : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Value offset 0x0
 __declspec(property(get=__get_Value, put=__set_Value)) int32_t  Value;

constexpr void __set_Value(int32_t  value) ;

constexpr int32_t& __get_Value() ;

constexpr int32_t const& __get_Value() const;

// Ctor Parameters [CppParam { name: "Value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Volatile__VolatileInt32(int32_t  Value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Volatile__VolatileInt32(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Volatile__VolatileInt32()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__Volatile__VolatileInt32, 0x4>, "Size mismatch!");

} // namespace end def System::Threading
// Type: ::VolatileObject
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2754))
// CS Name: ::Volatile::VolatileObject
struct CORDL_TYPE __Volatile__VolatileObject : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Value offset 0x0
 __declspec(property(get=__get_Value, put=__set_Value)) ::System::Object*  Value;

constexpr void __set_Value(::System::Object*  value) ;

constexpr ::System::Object* __get_Value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_Value() const;

// Ctor Parameters [CppParam { name: "Value", ty: "::System::Object*", modifiers: "", def_value: None }]
constexpr __Volatile__VolatileObject(::System::Object*  Value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Volatile__VolatileObject(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Volatile__VolatileObject()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__Volatile__VolatileObject, 0x8>, "Size mismatch!");

} // namespace end def System::Threading
// Type: System.Threading::Volatile
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2755))
// CS Name: ::System.Threading::Volatile*
class CORDL_TYPE Volatile : public ::System::Object {
public:
// Declarations
using VolatileObject = ::System::Threading::__Volatile__VolatileObject;

using VolatileInt32 = ::System::Threading::__Volatile__VolatileInt32;

using VolatileBoolean = ::System::Threading::__Volatile__VolatileBoolean;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Read addr 0x2620b84 size 0x18 virtual false final false
static inline bool Read(ByRef<bool>  location) ;

/// @brief Method Write addr 0x2620b9c size 0x24 virtual false final false
static inline void Write(ByRef<bool>  location, bool  value) ;

/// @brief Method Read addr 0x2620bc0 size 0x18 virtual false final false
static inline int32_t Read(ByRef<int32_t>  location) ;

/// @brief Method Write addr 0x2620bd8 size 0x24 virtual false final false
static inline void Write(ByRef<int32_t>  location, int32_t  value) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T Read(ByRef<T>  location) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void Write(ByRef<T>  location, T  value) ;

// Ctor Parameters [CppParam { name: "", ty: "Volatile", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Volatile(Volatile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Volatile", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Volatile(Volatile const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Volatile()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Volatile, 0x10>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::Volatile);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Volatile*, "System.Threading", "Volatile");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__Volatile__VolatileBoolean, "System.Threading", "Volatile/VolatileBoolean");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__Volatile__VolatileInt32, "System.Threading", "Volatile/VolatileInt32");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__Volatile__VolatileObject, "System.Threading", "Volatile/VolatileObject");
