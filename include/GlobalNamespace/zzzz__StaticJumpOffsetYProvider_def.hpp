#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StaticJumpOffsetYProvider)
namespace GlobalNamespace {
class __StaticJumpOffsetYProvider__InitData;
}
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticJumpOffsetYProvider;
}
namespace GlobalNamespace {
class __StaticJumpOffsetYProvider__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StaticJumpOffsetYProvider);
MARK_REF_PTR_T(::GlobalNamespace::__StaticJumpOffsetYProvider__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4828))
// CS Name: ::StaticJumpOffsetYProvider::InitData*
class CORDL_TYPE __StaticJumpOffsetYProvider__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field jumpyYOffset offset 0x10
 __declspec(property(get=__get_jumpyYOffset, put=__set_jumpyYOffset)) float_t  jumpyYOffset;

constexpr void __set_jumpyYOffset(float_t  value) ;

constexpr float_t& __get_jumpyYOffset() ;

constexpr float_t const& __get_jumpyYOffset() const;

static inline ::GlobalNamespace::__StaticJumpOffsetYProvider__InitData* New_ctor(float_t  jumpyYOffset) ;

/// @brief Method .ctor addr 0x2395bc8 size 0x28 virtual false final false
inline void _ctor(float_t  jumpyYOffset) ;

// Ctor Parameters [CppParam { name: "", ty: "__StaticJumpOffsetYProvider__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StaticJumpOffsetYProvider__InitData(__StaticJumpOffsetYProvider__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StaticJumpOffsetYProvider__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StaticJumpOffsetYProvider__InitData(__StaticJumpOffsetYProvider__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StaticJumpOffsetYProvider__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StaticJumpOffsetYProvider__InitData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::StaticJumpOffsetYProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4829))
// CS Name: ::StaticJumpOffsetYProvider*
class CORDL_TYPE StaticJumpOffsetYProvider : public ::System::Object {
public:
// Declarations
using InitData = ::GlobalNamespace::__StaticJumpOffsetYProvider__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _initData offset 0x10
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__StaticJumpOffsetYProvider__InitData*  _initData;

 __declspec(property(get=get_jumpOffsetY)) float_t  jumpOffsetY;

/// @brief Convert operator to "::GlobalNamespace::IJumpOffsetYProvider"
constexpr operator  ::GlobalNamespace::IJumpOffsetYProvider*() noexcept;

constexpr void __set__initData(::GlobalNamespace::__StaticJumpOffsetYProvider__InitData*  value) ;

constexpr ::GlobalNamespace::__StaticJumpOffsetYProvider__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StaticJumpOffsetYProvider__InitData*> __get__initData() const;

/// @brief Method get_jumpOffsetY addr 0x2395ba4 size 0x1c virtual true final true
inline float_t get_jumpOffsetY() ;

static inline ::GlobalNamespace::StaticJumpOffsetYProvider* New_ctor() ;

/// @brief Method .ctor addr 0x2395bc0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StaticJumpOffsetYProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticJumpOffsetYProvider(StaticJumpOffsetYProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticJumpOffsetYProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticJumpOffsetYProvider(StaticJumpOffsetYProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StaticJumpOffsetYProvider()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticJumpOffsetYProvider, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StaticJumpOffsetYProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticJumpOffsetYProvider*, "", "StaticJumpOffsetYProvider");
NEED_NO_BOX(::GlobalNamespace::__StaticJumpOffsetYProvider__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StaticJumpOffsetYProvider__InitData*, "", "StaticJumpOffsetYProvider/InitData");
