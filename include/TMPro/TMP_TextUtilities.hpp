// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
  // Forward declaring type: CaretPosition
  struct CaretPosition;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_TextUtilities
  class TMP_TextUtilities : public ::Il2CppObject {
    public:
    // Nested type: TMPro::TMP_TextUtilities::LineSegment
    struct LineSegment;
    // Creating value type constructor for type: TMP_TextUtilities
    TMP_TextUtilities() noexcept {}
    // Get static field: static private UnityEngine.Vector3[] m_rectWorldCorners
    static ::Array<UnityEngine::Vector3>* _get_m_rectWorldCorners();
    // Set static field: static private UnityEngine.Vector3[] m_rectWorldCorners
    static void _set_m_rectWorldCorners(::Array<UnityEngine::Vector3>* value);
    // static field const value: static private System.String k_lookupStringL
    static constexpr const char* k_lookupStringL = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-";
    // Get static field: static private System.String k_lookupStringL
    static ::Il2CppString* _get_k_lookupStringL();
    // Set static field: static private System.String k_lookupStringL
    static void _set_k_lookupStringL(::Il2CppString* value);
    // static field const value: static private System.String k_lookupStringU
    static constexpr const char* k_lookupStringU = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-";
    // Get static field: static private System.String k_lookupStringU
    static ::Il2CppString* _get_k_lookupStringU();
    // Set static field: static private System.String k_lookupStringU
    static void _set_k_lookupStringU(::Il2CppString* value);
    // static public System.Int32 GetCursorIndexFromPosition(TMPro.TMP_Text textComponent, UnityEngine.Vector3 position, UnityEngine.Camera camera)
    // Offset: 0x13FBDF0
    static int GetCursorIndexFromPosition(TMPro::TMP_Text* textComponent, UnityEngine::Vector3 position, UnityEngine::Camera* camera);
    // static public System.Int32 GetCursorIndexFromPosition(TMPro.TMP_Text textComponent, UnityEngine.Vector3 position, UnityEngine.Camera camera, out TMPro.CaretPosition cursor)
    // Offset: 0x13FC5D4
    static int GetCursorIndexFromPosition(TMPro::TMP_Text* textComponent, UnityEngine::Vector3 position, UnityEngine::Camera* camera, TMPro::CaretPosition& cursor);
    // static public System.Int32 FindNearestLine(TMPro.TMP_Text text, UnityEngine.Vector3 position, UnityEngine.Camera camera)
    // Offset: 0x13FC810
    static int FindNearestLine(TMPro::TMP_Text* text, UnityEngine::Vector3 position, UnityEngine::Camera* camera);
    // static public System.Int32 FindNearestCharacterOnLine(TMPro.TMP_Text text, UnityEngine.Vector3 position, System.Int32 line, UnityEngine.Camera camera, System.Boolean visibleOnly)
    // Offset: 0x13FCA4C
    static int FindNearestCharacterOnLine(TMPro::TMP_Text* text, UnityEngine::Vector3 position, int line, UnityEngine::Camera* camera, bool visibleOnly);
    // static public System.Boolean IsIntersectingRectTransform(UnityEngine.RectTransform rectTransform, UnityEngine.Vector3 position, UnityEngine.Camera camera)
    // Offset: 0x13FD34C
    static bool IsIntersectingRectTransform(UnityEngine::RectTransform* rectTransform, UnityEngine::Vector3 position, UnityEngine::Camera* camera);
    // static public System.Int32 FindIntersectingCharacter(TMPro.TMP_Text text, UnityEngine.Vector3 position, UnityEngine.Camera camera, System.Boolean visibleOnly)
    // Offset: 0x13FD4C8
    static int FindIntersectingCharacter(TMPro::TMP_Text* text, UnityEngine::Vector3 position, UnityEngine::Camera* camera, bool visibleOnly);
    // static public System.Int32 FindNearestCharacter(TMPro.TMP_Text text, UnityEngine.Vector3 position, UnityEngine.Camera camera, System.Boolean visibleOnly)
    // Offset: 0x13FBFA0
    static int FindNearestCharacter(TMPro::TMP_Text* text, UnityEngine::Vector3 position, UnityEngine::Camera* camera, bool visibleOnly);
    // static public System.Int32 FindIntersectingWord(TMPro.TMP_Text text, UnityEngine.Vector3 position, UnityEngine.Camera camera)
    // Offset: 0x13FD774
    static int FindIntersectingWord(TMPro::TMP_Text* text, UnityEngine::Vector3 position, UnityEngine::Camera* camera);
    // static public System.Int32 FindNearestWord(TMPro.TMP_Text text, UnityEngine.Vector3 position, UnityEngine.Camera camera)
    // Offset: 0x13FDE3C
    static int FindNearestWord(TMPro::TMP_Text* text, UnityEngine::Vector3 position, UnityEngine::Camera* camera);
    // static public System.Int32 FindIntersectingLine(TMPro.TMP_Text text, UnityEngine.Vector3 position, UnityEngine.Camera camera)
    // Offset: 0x13FE6A8
    static int FindIntersectingLine(TMPro::TMP_Text* text, UnityEngine::Vector3 position, UnityEngine::Camera* camera);
    // static public System.Int32 FindIntersectingLink(TMPro.TMP_Text text, UnityEngine.Vector3 position, UnityEngine.Camera camera)
    // Offset: 0x13FE890
    static int FindIntersectingLink(TMPro::TMP_Text* text, UnityEngine::Vector3 position, UnityEngine::Camera* camera);
    // static public System.Int32 FindNearestLink(TMPro.TMP_Text text, UnityEngine.Vector3 position, UnityEngine.Camera camera)
    // Offset: 0x13FECD4
    static int FindNearestLink(TMPro::TMP_Text* text, UnityEngine::Vector3 position, UnityEngine::Camera* camera);
    // static private System.Boolean PointIntersectRectangle(UnityEngine.Vector3 m, UnityEngine.Vector3 a, UnityEngine.Vector3 b, UnityEngine.Vector3 c, UnityEngine.Vector3 d)
    // Offset: 0x13FCE84
    static bool PointIntersectRectangle(UnityEngine::Vector3 m, UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3 c, UnityEngine::Vector3 d);
    // static public System.Boolean ScreenPointToWorldPointInRectangle(UnityEngine.Transform transform, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam, out UnityEngine.Vector3 worldPoint)
    // Offset: 0x13FC394
    static bool ScreenPointToWorldPointInRectangle(UnityEngine::Transform* transform, UnityEngine::Vector2 screenPoint, UnityEngine::Camera* cam, UnityEngine::Vector3& worldPoint);
    // static private System.Boolean IntersectLinePlane(TMPro.TMP_TextUtilities/LineSegment line, UnityEngine.Vector3 point, UnityEngine.Vector3 normal, out UnityEngine.Vector3 intersectingPoint)
    // Offset: 0x13FF550
    static bool IntersectLinePlane(TMPro::TMP_TextUtilities::LineSegment line, UnityEngine::Vector3 point, UnityEngine::Vector3 normal, UnityEngine::Vector3& intersectingPoint);
    // static public System.Single DistanceToLine(UnityEngine.Vector3 a, UnityEngine.Vector3 b, UnityEngine.Vector3 point)
    // Offset: 0x13FD0DC
    static float DistanceToLine(UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3 point);
    // static public System.Char ToLowerFast(System.Char c)
    // Offset: 0x13FF770
    static ::Il2CppChar ToLowerFast(::Il2CppChar c);
    // static public System.Char ToUpperFast(System.Char c)
    // Offset: 0x13FF7EC
    static ::Il2CppChar ToUpperFast(::Il2CppChar c);
    // static public System.Int32 GetSimpleHashCode(System.String s)
    // Offset: 0x13FF868
    static int GetSimpleHashCode(::Il2CppString* s);
    // static public System.UInt32 GetSimpleHashCodeLowercase(System.String s)
    // Offset: 0x13FF8E0
    static uint GetSimpleHashCodeLowercase(::Il2CppString* s);
    // static public System.Int32 HexToInt(System.Char hex)
    // Offset: 0x13FF9B4
    static int HexToInt(::Il2CppChar hex);
    // static public System.Int32 StringHexToInt(System.String s)
    // Offset: 0x13FF9E0
    static int StringHexToInt(::Il2CppString* s);
    // static private System.Void .cctor()
    // Offset: 0x13FFB08
    static void _cctor();
  }; // TMPro.TMP_TextUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_TextUtilities*, "TMPro", "TMP_TextUtilities");
// Writing includes for template specializations
#include "TMPro/TMP_Text.hpp"
#include "UnityEngine/Camera.hpp"
#include "TMPro/CaretPosition.hpp"
#include "UnityEngine/RectTransform.hpp"
#include "UnityEngine/Transform.hpp"
#include "UnityEngine/Vector2.hpp"
#include "TMPro/TMP_TextUtilities_LineSegment.hpp"
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::GetCursorIndexFromPosition
// Il2CppName: GetCursorIndexFromPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*)>(&TMPro::TMP_TextUtilities::GetCursorIndexFromPosition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "GetCursorIndexFromPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_Text*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::GetCursorIndexFromPosition
// Il2CppName: GetCursorIndexFromPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*, TMPro::CaretPosition&)>(&TMPro::TMP_TextUtilities::GetCursorIndexFromPosition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "GetCursorIndexFromPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_Text*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>(), ::il2cpp_utils::ExtractIndependentType<TMPro::CaretPosition&>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindNearestLine
// Il2CppName: FindNearestLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*)>(&TMPro::TMP_TextUtilities::FindNearestLine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindNearestLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_Text*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindNearestCharacterOnLine
// Il2CppName: FindNearestCharacterOnLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, int, UnityEngine::Camera*, bool)>(&TMPro::TMP_TextUtilities::FindNearestCharacterOnLine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindNearestCharacterOnLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_Text*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::IsIntersectingRectTransform
// Il2CppName: IsIntersectingRectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::RectTransform*, UnityEngine::Vector3, UnityEngine::Camera*)>(&TMPro::TMP_TextUtilities::IsIntersectingRectTransform)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "IsIntersectingRectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::RectTransform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindIntersectingCharacter
// Il2CppName: FindIntersectingCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*, bool)>(&TMPro::TMP_TextUtilities::FindIntersectingCharacter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindIntersectingCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_Text*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindNearestCharacter
// Il2CppName: FindNearestCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*, bool)>(&TMPro::TMP_TextUtilities::FindNearestCharacter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindNearestCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_Text*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindIntersectingWord
// Il2CppName: FindIntersectingWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*)>(&TMPro::TMP_TextUtilities::FindIntersectingWord)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindIntersectingWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_Text*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindNearestWord
// Il2CppName: FindNearestWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*)>(&TMPro::TMP_TextUtilities::FindNearestWord)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindNearestWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_Text*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindIntersectingLine
// Il2CppName: FindIntersectingLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*)>(&TMPro::TMP_TextUtilities::FindIntersectingLine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindIntersectingLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_Text*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindIntersectingLink
// Il2CppName: FindIntersectingLink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*)>(&TMPro::TMP_TextUtilities::FindIntersectingLink)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindIntersectingLink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_Text*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::FindNearestLink
// Il2CppName: FindNearestLink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(TMPro::TMP_Text*, UnityEngine::Vector3, UnityEngine::Camera*)>(&TMPro::TMP_TextUtilities::FindNearestLink)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "FindNearestLink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_Text*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::PointIntersectRectangle
// Il2CppName: PointIntersectRectangle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&TMPro::TMP_TextUtilities::PointIntersectRectangle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "PointIntersectRectangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::ScreenPointToWorldPointInRectangle
// Il2CppName: ScreenPointToWorldPointInRectangle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform*, UnityEngine::Vector2, UnityEngine::Camera*, UnityEngine::Vector3&)>(&TMPro::TMP_TextUtilities::ScreenPointToWorldPointInRectangle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "ScreenPointToWorldPointInRectangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::IntersectLinePlane
// Il2CppName: IntersectLinePlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(TMPro::TMP_TextUtilities::LineSegment, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3&)>(&TMPro::TMP_TextUtilities::IntersectLinePlane)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "IntersectLinePlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<TMPro::TMP_TextUtilities::LineSegment>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::DistanceToLine
// Il2CppName: DistanceToLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&TMPro::TMP_TextUtilities::DistanceToLine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "DistanceToLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::ToLowerFast
// Il2CppName: ToLowerFast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(::Il2CppChar)>(&TMPro::TMP_TextUtilities::ToLowerFast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "ToLowerFast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::ToUpperFast
// Il2CppName: ToUpperFast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(::Il2CppChar)>(&TMPro::TMP_TextUtilities::ToUpperFast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "ToUpperFast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::GetSimpleHashCode
// Il2CppName: GetSimpleHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*)>(&TMPro::TMP_TextUtilities::GetSimpleHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "GetSimpleHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::GetSimpleHashCodeLowercase
// Il2CppName: GetSimpleHashCodeLowercase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Il2CppString*)>(&TMPro::TMP_TextUtilities::GetSimpleHashCodeLowercase)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "GetSimpleHashCodeLowercase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::HexToInt
// Il2CppName: HexToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppChar)>(&TMPro::TMP_TextUtilities::HexToInt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "HexToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::StringHexToInt
// Il2CppName: StringHexToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*)>(&TMPro::TMP_TextUtilities::StringHexToInt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), "StringHexToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_TextUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_TextUtilities::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_TextUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
