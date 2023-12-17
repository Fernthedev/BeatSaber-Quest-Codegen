#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_HAPI_Transform)
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_Transform;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_HAPI_Transform);
// Type: HoudiniEngineUnity::Test_HAPI_Transform
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9894))
// CS Name: ::HoudiniEngineUnity::Test_HAPI_Transform*
class CORDL_TYPE Test_HAPI_Transform : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field self offset 0x10
 __declspec(property(get=__get_self, put=__set_self)) ::HoudiniEngineUnity::HAPI_Transform  self;

/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_Transform*>"
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_Transform*>*() noexcept;

constexpr void __set_self(::HoudiniEngineUnity::HAPI_Transform  value) ;

constexpr ::HoudiniEngineUnity::HAPI_Transform& __get_self() ;

constexpr ::HoudiniEngineUnity::HAPI_Transform const& __get_self() const;

static inline ::HoudiniEngineUnity::Test_HAPI_Transform* New_ctor(::HoudiniEngineUnity::HAPI_Transform  self) ;

/// @brief Method .ctor addr 0x21e2eb4 size 0x34 virtual false final false
inline void _ctor(::HoudiniEngineUnity::HAPI_Transform  self) ;

/// @brief Method IsEquivalentTo addr 0x21e2ee8 size 0x200 virtual true final true
inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_Transform*  other) ;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_Transform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Test_HAPI_Transform(Test_HAPI_Transform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_Transform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Test_HAPI_Transform(Test_HAPI_Transform const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Test_HAPI_Transform()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_HAPI_Transform, 0x38>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_Transform);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_Transform*, "HoudiniEngineUnity", "Test_HAPI_Transform");
