#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MockPlatformEntitlement)
namespace GlobalNamespace {
struct EntitlementStatus;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlatformEntitlement;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlatformEntitlement);
// Type: ::MockPlatformEntitlement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4106))
// CS Name: ::MockPlatformEntitlement*
class CORDL_TYPE MockPlatformEntitlement : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _id offset 0x10
 __declspec(property(get=__get__id, put=__set__id)) ::StringW  _id;

/// @brief Field _status offset 0x18
 __declspec(property(get=__get__status, put=__set__status)) ::GlobalNamespace::EntitlementStatus  _status;

 __declspec(property(get=get_id)) ::StringW  id;

 __declspec(property(get=get_status)) ::GlobalNamespace::EntitlementStatus  status;

constexpr void __set__id(::StringW  value) ;

constexpr ::StringW& __get__id() ;

constexpr ::StringW const& __get__id() const;

constexpr void __set__status(::GlobalNamespace::EntitlementStatus  value) ;

constexpr ::GlobalNamespace::EntitlementStatus& __get__status() ;

constexpr ::GlobalNamespace::EntitlementStatus const& __get__status() const;

/// @brief Method get_id addr 0x223526c size 0x8 virtual false final false
inline ::StringW get_id() ;

/// @brief Method get_status addr 0x2235274 size 0x8 virtual false final false
inline ::GlobalNamespace::EntitlementStatus get_status() ;

static inline ::GlobalNamespace::MockPlatformEntitlement* New_ctor(::StringW  id, ::GlobalNamespace::EntitlementStatus  status) ;

/// @brief Method .ctor addr 0x2234e64 size 0x30 virtual false final false
inline void _ctor(::StringW  id, ::GlobalNamespace::EntitlementStatus  status) ;

/// @brief Method GetIt addr 0x2234e58 size 0xc virtual false final false
inline void GetIt() ;

// Ctor Parameters [CppParam { name: "", ty: "MockPlatformEntitlement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockPlatformEntitlement(MockPlatformEntitlement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockPlatformEntitlement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockPlatformEntitlement(MockPlatformEntitlement const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MockPlatformEntitlement()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlatformEntitlement, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlatformEntitlement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlatformEntitlement*, "", "MockPlatformEntitlement");
